#ifndef DAYOFYEAR_HPP
#define DAYOFYEAR_HPP

#include<string>
#include<iostream>

const int MONTH_TIER[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
const std::string MONTHS[] = {"January", "February", "March", "April","May", "June", "July", "August", "September","October", "November", "December"};
const int NUM_OF_MONTHS = 12;

class DayofYear{
private:
	int dayOfYear;

public:
	void setDayofYear(int dayOfYear);

	//Option 1 member functions:
	void option1();
	std::string getDateString();
	int getMonth(int dayOfYear);
	int getDays(int dayOfYear);

	//Option 2 member functions:
	void option2();
	int getMonthIndex(std::string);

};

#endif



