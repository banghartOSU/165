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
	MyInteger(const MyInteger &);

	//deconstructor
	~MyInteger();

	//set int value
	void setMyInt(int);

	//get int value 
	int getMyInt() const;
};

#endif