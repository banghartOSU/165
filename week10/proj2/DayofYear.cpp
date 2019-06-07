#include"DayofYear.hpp"

DayofYear::DayofYear(std::string month, int additionalDays){
	int monthValue = MONTH_TIER[monthIndex];
	setDayofYear(monthValue + additionalDays);
}

DayofYear::DayofYear(){
	setDayofYear(-1);
}

void DayofYear::setDayofYear(int dayOfYear){
	this->dayOfYear = dayOfYear;
}

void DayofYear::setMonthIndex(int index){
	monthIndex = index;
}

int DayofYear::getDayofYear() const{
	return this->dayOfYear;
}

std::string DayofYear::getDateString(){
	std::string month = MONTHS[getMonth(this->dayOfYear)];
	int numOfDays = getDays(this->dayOfYear);

	std::string strNumofDays = DayofYear::ToString(numOfDays);
	return month + " " + strNumofDays;

}

int DayofYear::getMonth(int dayOfYear){
	int monthNum = 0;
	for(int i = 0; i <= NUM_OF_MONTHS; i++){
		if(dayOfYear <= MONTH_TIER[i]){
			monthNum = i-1;
			if(monthNum < 0 )
				monthNum = 11;
			break;
		}
	}
	return monthNum;
}

int DayofYear::getDays(int dayOfYear){
	if(dayOfYear > 365){
		dayOfYear -= 365;
	} else if(dayOfYear < 1){
		dayOfYear = 365;
	}
	int fullMonth = MONTH_TIER[this->getMonth(dayOfYear)];
	int daysIntoMonth = dayOfYear - fullMonth;
	return daysIntoMonth;
}

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

void DayofYear::checkDateString(int monthIndex, int monthValue, int additionalDays){
	int lastDayOfMonth = 0;
	lastDayOfMonth = MONTH_TIER[monthIndex+1] - MONTH_TIER[monthIndex];
	if(lastDayOfMonth < additionalDays)
		throw option2Exception();
}

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

void DayofYear::printBeforeAfter(){
	dayOfYear--;
	std::cout << "The day before is " << this->getDateString() << "." << std::endl;
	dayOfYear++;
	dayOfYear++;
	std::cout << "The day after is " << this->getDateString() << "." <<std::endl;
}











