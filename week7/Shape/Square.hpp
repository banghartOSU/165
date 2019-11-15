/*************************************************
 * Author: Thomas Banghart
 * Date: 05/15/2019
 * Description: Header for the Square child class (inherents from Rectangle)
 * **********************************************/

#ifndef SQUARE_HPP
#define SQUARE_HPP

#include"Rectangle.hpp"

class Square : public Rectangle{

public:
	//Constructors 
	Square();
	Square(double);


	//Virtual because inherited from Rectangle
	virtual void setLength(double);
	virtual void setWidth(double);

};

#endif