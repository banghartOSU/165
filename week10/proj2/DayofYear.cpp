#include"DayofYear.hpp"

void DayofYear::setDayofYear(int dayOfYear){
	this->dayOfYear = dayOfYear;
}

std::string DayofYear::getDateString(){
	std::string month = MONTHS[getMonth(this->dayOfYear)];
	int numOfDays = getDays(this->dayOfYear);

	std::string strNumofDays = std::to_string(numOfDays);
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
	int valToReturn = 0;
	for(int i = 0; i < NUM_OF_MONTHS; i++){
		if(MONTHS[i].compare(monthToken) == 0){
			valToReturn = i;
		}

	}

	return valToReturn;
}

void DayofYear::option1(){
	int dayOfYearInput = 0;
	std::cout << "This program converts a day given by a number 1 through 365 into a month and a day." << std::endl;
	std::cout << "Enter a number: ";
	std::cin >> dayOfYearInput;
		
	if(dayOfYearInput < 1 || dayOfYearInput > 365){
		std::cout<< "Invalid range for a day." << std::endl;
		exit(1);
	}
	
	this->setDayofYear(dayOfYearInput);
	std::string dateString = this->getDateString();
	std::cout << dateString << "." << std::endl;

	this->setDayofYear(dayOfYearInput-1);
	dateString = this->getDateString();
	std::cout << "The day before is " << dateString << "." << std::endl;

	this->setDayofYear(dayOfYearInput+1);
	dateString = this->getDateString();
	std::cout << "The day after is " << dateString << "." <<std::endl;
}



void DayofYear::option2(){
	std::string dateString;
	int monthIndex;
	int monthValue = 0;
	int additionalDays = 0;
	int dayOfYear = 0;


	std::cout << "This program converts a month and day of month into a day of the year in the range 1...365." << std::endl;
	std::cout << "Enter month and day (Example: January 3): "; 

	std::getline(std::cin, dateString);
	monthIndex = this->getMonthIndex(dateString);

	monthValue = MONTH_TIER[monthIndex];
	additionalDays = std::stoi(dateString.substr(dateString.find(" "), std::string::npos));



	// //SHOULD BE A FUNCTION
	// if(MONTH_TIER[monthIndex] - additionalDays != MONTH_TIER[monthIndex]){
	// 	std::cout << "Incorrect name or day of month." << std::endl;
	// 	exit(1);
	// }


	dayOfYear = monthValue + additionalDays;
	this->setDayofYear(dayOfYear);
	std::cout << this->dayOfYear <<std::endl;

	this->setDayofYear(dayOfYear-1);
	dateString = this->getDateString();
	std::cout << "The day before is " << dateString << "." << std::endl;

	this->setDayofYear(dayOfYear+1);
	dateString = this->getDateString();
	std::cout << "The day after is " << dateString << "." <<std::endl;

}












