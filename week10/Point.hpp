/*****************************
 * Author: Thomas Banghart
 * Date: 06/06/2019
 * Description: This is the header file for the Point class
 *****************************/

#ifndef POINT_HPP
#define POINT_HPP
#include<math.h>

class Point{
private:
	double xCoord, yCoord;
public:
	//constructors
	Point();
	Point(double newX, double newY);
	
	//getters
	double getXCoord() const;
	double getYCoord() const;

	//setters
	void setXCoord(double newX);
	void setYCoord(double newY);

	//member functions
	double SqrDistanceTo(const Point &pointToCompare);
};

#endif
