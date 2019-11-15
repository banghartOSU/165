/*************************************************
 * Author: Thomas Banghart
 * Date: 05/15/2019
 * Description: Implementation file for the Shape base class
 * **********************************************/
#include"Shape.hpp"

class Shape{

public:
	virtual double area()=0;
	virtual double perimeter()=0;

}

