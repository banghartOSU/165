#include<iostream>
#include"DayofYear.hpp"

int DayofYear::monthIndex = -1;

int main(){
	int optionNum = 0;
	std::cout << "Please choose an option (1 or 2):" << std::endl;
	std::cin >> optionNum;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

try{
	if(optionNum == 1){
		int dayOfYearInput = 0;
		DayofYear doy;

		std::cout << "This program converts a day given by a number 1 through 365 into a month and a day." << std::endl;
		std::cout << "Enter a number: ";

		std::cin >> dayOfYearInput;

		if(dayOfYearInput < 1 || dayOfYearInput > 365){
			throw DayofYear::option1Exception();
		}
		
		doy.setDayofYear(dayOfYearInput);
		std::string dateString = doy.getDateString();
		std::cout << dateString << "." << std::endl;

		doy.printBeforeAfter();

	}else if(optionNum == 2){
		std::string dateString;
		std::string month;
		int monthIndex = 0;
		int monthValue = 0;
		int additionalDays = 0;


		std::cout << "This program converts a month and day of month into a day of the year in the range 1...365." << std::endl;
		std::cout << "Enter month and day (Example: January 3): "; 

		std::getline(std::cin, dateString);

		monthIndex = (DayofYear::getMonthIndex(dateString));
		month = MONTHS[monthIndex];

		additionalDays = std::stoi(dateString.substr(dateString.find(" "), std::string::npos));

		DayofYear::checkDateString(monthIndex, MONTH_TIER[monthIndex], additionalDays);

		DayofYear::setMonthIndex(monthIndex);

		DayofYear doy(month, additionalDays);
		std::cout << doy.getDayofYear() << std::endl;

		doy.printBeforeAfter();

	}
}

//Option 1 Errors
catch(DayofYear::option1Exception){ std::cout << "Invalid range for a day." << std::endl; }
//Option 2 Errors
catch(DayofYear::option2Exception){ std::cout << "Incorrect name or day of month." << std::endl;}
catch(std::out_of_range){ std::cout << "Incorrect name or day of month." << std::endl;}
catch (std::invalid_argument){ std::cout << "Incorrect name or day of month." << std::endl;}

	return 0;
}