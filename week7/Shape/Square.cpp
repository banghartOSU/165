/*************************************************
 * Author: Thomas Banghart
 * Date: 05/15/2019
 * Description: Implementation file for the Square class
 * **********************************************/

#include"Square.hpp"

//Default constructor 
Square::Square(){
	length = 0;
	width = 0;
}

//Constructor that initializes the Square using the base 
//class constructor
Square::Square(double lengthOrWidth) 
	: Rectangle(lengthOrWidth, lengthOrWidth) {}

//Sets length and width to the same value by using the parent function
void Square::setWidth(double lengthOrWidth){
	Rectangle::setWidth(lengthOrWidth);
	Rectangle::setLength(lengthOrWidth);
}


//Sets length and width to the same value by using the parent function
void Square::setLength(double lengthOrWidth){
	Rectangle::setWidth(lengthOrWidth);
	Rectangle::setWidth(lengthOrWidth);
}



