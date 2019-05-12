
/*****************************
 * Author: Thomas Banghart
 * Date: 05/15/2019
 * Description: This is the implementation file for the MyInteger class.
 *****************************/

#include "MyInteger.hpp"

//Default Constructor
MyInteger::MyInteger(){
	pInteger = new int(0);
}

//Constructor w/argument
MyInteger::MyInteger(int newInt){
	pInteger = new int(newInt);
}

//Copy constructor -- based off book example
MyInteger::MyInteger(const MyInteger &obj){
	pInteger = new int(obj.getMyInt());
}

//Deconstructor
MyInteger::~MyInteger(){
	delete pInteger;
}

//Set value of pointer to argument 
void MyInteger::setMyInt(int newInt){
	*pInteger = newInt;
}

//Return the value of int pointer as a const
int MyInteger::getMyInt() const{
	return *pInteger;
}


//Assignment operator overload -- based off the example in the book
MyInteger& MyInteger::operator=(const MyInteger &right){
	if(this != &right){
		delete pInteger;
		pInteger = new int(right.getMyInt());	
	}
	return *this;

}