/*************************************************
 * Author: Thomas Banghart
 * Date: 05/15/2019
 * Description: Header for the Circle child class (inherents from Shape)
 * **********************************************/


#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"
#include<math.h>

class Circle : public Shape{

private:
	double radius;
	void setRadius(double);

public:
	Circle();
	Circle(double);

	//Virtual because they are inherited from Shape
	virtual double area();
	virtual double perimeter();

};

#endif