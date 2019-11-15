#include "MyInteger.hpp"

//Default Constructor
MyInteger::MyInteger(){
	pInteger = new int(0);
}

//Constructor w/argument
MyInteger::MyInteger(int newInt){
	pInteger = new int(newInt);
}

//Copy constructor
MyInteger::MyInteger(const MyInteger &obj){
	pInteger = new int(obj.getMyInt());
}

//Deconstructor
MyInteger::~MyInteger(){
	delete pInteger;
}


//Set value of pointer to argument 
void MyInteger::setMyInt(int newInt){
	*pInteger = newInt
}

//Return the value of int pointer as a const
int MyInteger::getMyInt() const{
	return *pInteger;
}
