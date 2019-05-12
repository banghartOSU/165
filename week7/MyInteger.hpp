/*****************************
 * Author: Thomas Banghart
 * Date: 05/03/2019
 * Description: This is the header file for the MyInteger class.
 *****************************/

#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP

class MyInteger{

private:
	int* pInteger;

public:
	//constructors
	MyInteger();
	MyInteger(int);

	//copy constructor
	MyInteger(const MyInteger&);

	//deconstructor
	~MyInteger();

	//set int value
	void setMyInt(int);

	//get int value 
	int getMyInt() const;

	//Assignment operator overide
	MyInteger& operator=(const MyInteger &);
};

#endif