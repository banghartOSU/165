/*************************************************
 * Author: Thomas Banghart
 * Date: 05/15/2019
 * Description: Header for the Rectangle child class (inherents from Shape)
 * **********************************************/



#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include"Shape.hpp"

class Rectangle : public Shape{
protected:
	//Protected so that Square can access these 
	double length;
	double width;

public: 
	//Constructors
	Rectangle();	
	Rectangle(double, double);

	//Virtual so square can overide them
	virtual void setLength(double);
	virtual void setWidth(double);

	//Virtual because inherited from Shape
	virtual double area();
	virtual double perimeter();

};

#endif