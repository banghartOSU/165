/*****************************
 * Author: Thomas Banghart
 * Date: 06/06/2019
 * Description: This is the header file for the 
 * DayofYear class.
 *****************************/
#ifndef DAYOFYEAR_HPP
#define DAYOFYEAR_HPP

#include<string>
#include<iostream>
#include<sstream>
#include<cstring>
#include<limits>
#include<stdlib.h>
#include<cctype>
#include<stdexcept>

const int MONTH_TIER[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
const std::string MONTHS[] = {"January", "February", "March", "April","May", "June", "July", "August", "September","October", "November", "December"};
const int NUM_OF_MONTHS = 12;

class DayofYear{
private:
	int dayOfYear;

public:
	DayofYear();
	DayofYear(std::string, int);
	void printBeforeAfter();


	void setDayofYear(int dayOfYear);
	int getDayofYear() const;
	

	//Option 1 member functions:
	std::string getDateString();
	void option1();
	int getMonth(int dayOfYear);
	int getDays(int dayOfYear);
	class option1Exception { };

	//Option 2 member functions:
	static int getMonthIndex(std::string);
	static void checkDateString(int,int,int);
	class option2Exception { };

	//Overloaded ++ operators
	DayofYear& operator++(); 
	DayofYear operator++(int);

	//Overloaded -- operators
	DayofYear& operator--();
	DayofYear operator--(int);

	//Template ToString function since to_string() 
	//failed test cases using the compiler on flip/Mimir
	template <typename T>
	std::string ToString(T val){
    	std::stringstream stream;
    	stream << val;
    	return stream.str();
	}
};

#endif



