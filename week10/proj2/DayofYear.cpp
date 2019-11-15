/*****************************
 * Author: Thomas Banghart
 * Date: 06/06/2019
 * Description: This is the implementation file for the 
 * DayofYear class.
 *****************************/
#include"DayofYear.hpp"
//Default constructor used to initalize 
//DayofYear object with "1" as a place holder.
DayofYear::DayofYear(){
	setDayofYear(1);
}

/*****************************************************
* Constructor that takes a string of the month name and the number
* of days into that month. Converts month name into number of days 
* starting from January 1st by referencing the const MONTH_TIER array.
* bounds are checked in checkDateString() called form main().
*****************************************************/
DayofYear::DayofYear(std::string month, int additionalDays){
	int monthValue = 0;
	for(int i = 0; i < NUM_OF_MONTHS; i++){
		if(MONTHS[i].compare(month) == 0){
			monthValue = MONTH_TIER[i];
		}
	}
	setDayofYear(monthValue + additionalDays);
}
/*****************************************************
* setDayofYear(int) sets the dayOfYear member value to 
* the argument's value.
*****************************************************/
void DayofYear::setDayofYear(int dayOfYear){
	if(dayOfYear < 1 || dayOfYear > 365)
		throw option1Exception();
	this->dayOfYear = dayOfYear;
}
/*****************************************************
* getDayofYear() returns the dayOfYear member variable as 
* a const int.
*****************************************************/
int DayofYear::getDayofYear() const{
	return this->dayOfYear;
}
/*****************************************************
* getDateString() returns the dayOfYear member variable as 
* a string in "<Month Name> <number of days>" format.
*****************************************************/
std::string DayofYear::getDateString(){
	//Get the name of the month by index using the getMonth() helper function.
	std::string month = MONTHS[getMonth(this->dayOfYear)];
	//Get the additional number of days not accounted for in the MONTH_TIER array
	int numOfDays = getDays(this->dayOfYear);
	//Cast additional days to string in order to concatenate the two
	std::string strNumofDays = DayofYear::ToString(numOfDays);

	return month + " " + strNumofDays;
}
/*****************************************************
* getMonth() returns the index of the month in the MONTHS 
* array corresponding to the first MONTH_TIER that the dayOfYear is 
* less than or equal to. In other words, this shows the number of days
* in a year that are accounted for by complete months. 
*****************************************************/
int DayofYear::getMonth(int dayOfYear){
	int monthNum = 0;
	for(int i = 0; i <= NUM_OF_MONTHS; i++){
		if(dayOfYear <= MONTH_TIER[i]){
			monthNum = i-1;
			//Account for case when user enters "1" for day of year 
			if(monthNum < 0 )
				monthNum = 11;
			break;
		}
	}
	return monthNum;
}
/*****************************************************
* getDays() returns the number of days in the dayOfYear member 
* variable that are not accounted for by complete months. 
*****************************************************/
int DayofYear::getDays(int dayOfYear){
	//Check bounds, if we go over 365 it is a "new year".
	if(dayOfYear > 365){
		dayOfYear -= 365;
	//Else, if day of year is less than "1" it's the previous year. 
	} else if(dayOfYear < 1){
		dayOfYear = 365;
	}
	//Get number of days accounted for by complete months
	int fullMonth = MONTH_TIER[this->getMonth(dayOfYear)];
	//Find additional days into that month and return it.
	int daysIntoMonth = dayOfYear - fullMonth;
	return daysIntoMonth;
}
/*****************************************************
* getMonthIndex() acts much like getMonth() but works starting 
* from a string and converting to an int. 
*****************************************************/
int DayofYear::getMonthIndex(std::string dateString){
	std::string monthToken = dateString.substr(0, dateString.find(" "));
	int valToReturn = -1;
	for(int i = 0; i < NUM_OF_MONTHS; i++){
		if(MONTHS[i].compare(monthToken) == 0){
			valToReturn = i;
		}
	}
	if(valToReturn == -1){
		throw option2Exception();
	}

	return valToReturn;
}
/*****************************************************
* checkDateString() checks user input for "Option 2",
* if a user attempts to enter an invalid date for a particular 
* month an exception is thrown.   
*****************************************************/
void DayofYear::checkDateString(int monthIndex, int monthValue, int additionalDays){
	int lastDayOfMonth = 0;
	lastDayOfMonth = MONTH_TIER[monthIndex+1] - MONTH_TIER[monthIndex];
	if(lastDayOfMonth < additionalDays)
		throw option2Exception();
}
/*****************************************************
* printBeforeAfter() prints the last two statements of both 
* program options. 
*****************************************************/
void DayofYear::printBeforeAfter(){
	dayOfYear--;
	std::cout << "The day before is " << this->getDateString() << "." << std::endl;
	dayOfYear += 2;
	std::cout << "The day after is " << this->getDateString() << ".";
}

//Overloaded ++ and -- operators: 
DayofYear& DayofYear::operator++(){
	dayOfYear++;
	if(dayOfYear > 365)
		dayOfYear = 1;
	return *this;
}
DayofYear DayofYear::operator++(int){
	DayofYear temp = *this;
	dayOfYear++;
	if(dayOfYear > 365)
		dayOfYear = 1;
	return temp;
}

DayofYear& DayofYear::operator--(){
	dayOfYear--;
	if(dayOfYear <= 0)
		dayOfYear = 365;
	return *this;
}
DayofYear DayofYear::operator--(int){
	DayofYear temp = *this;
	dayOfYear--;
	if(dayOfYear <= 0)
		dayOfYear = 365;
	return temp;
}













