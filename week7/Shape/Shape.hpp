/*************************************************
 * Author: Thomas Banghart
 * Date: 05/15/2019
 * Description: Header for the Shape base class
 * **********************************************/


#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape{

public:
	virtual double area()=0;
	virtual double perimeter()=0;

};

#endif