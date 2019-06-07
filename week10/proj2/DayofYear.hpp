#ifndef DAYOFYEAR_HPP
#define DAYOFYEAR_HPP

#include<string>
#include<iostream>
#include <sstream>

const int MONTH_TIER[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
const std::string MONTHS[] = {"January", "February", "March", "April","May", "June", "July", "August", "September","October", "November", "December"};
const int NUM_OF_MONTHS = 12;

class DayofYear{
private:
	int dayOfYear;
	static int monthIndex;

public:
	DayofYear();
	DayofYear(std::string, int);
	void setDayofYear(int dayOfYear);
	int getDayofYear() const;
	void printBeforeAfter();

	//Option 1 member functions:
	void option1();
	std::string getDateString();
	int getMonth(int dayOfYear);
	int getDays(int dayOfYear);
	class option1Exception { };

	//Option 2 member functions:
	static int getMonthIndex(std::string);
	static void setMonthIndex(int);
	static void checkDateString(int,int,int);
	class option2Exception { };

	DayofYear& operator++(); 
	DayofYear operator++(int);

	DayofYear& operator--();
	DayofYear operator--(int);


	template <typename T>
	std::string ToString(T val){
    std::stringstream stream;
    stream << val;
    return stream.str();
	}





};

#endif



