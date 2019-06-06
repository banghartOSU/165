#include"Point.hpp"
#include<math.h>

//Constructors
Point::Point(){
	setXCoord(0);
	setYCoord(0);
}

Point::Point(double newX, double newY){
	setXCoord(newX);
	setYCoord(newY);
}

//getters
double Point::getXCoord() const {
	return xCoord;
}
double Point::getYCoord() const {
	return yCoord;
}

//setters
void Point::setXCoord(double newX){
	xCoord = newX;
}
void Point::setYCoord(double newY){
	yCoord = newY;
}

//member function
double Point::SqrDistanceTo(const Point &pointToCompare){
	double dist = 0.0;
	//distance = (x2-x1) + (y2-y1)
	dist = pow((pointToCompare.getXCoord() - this->getXCoord()),2)
			+ pow((pointToCompare.getYCoord() - this->getYCoord()),2);

	return dist;
}
