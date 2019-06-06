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
	

	//getterss
	double getXCoord() const;
	double getYCoord() const;

	//setters
	void setXCoord(double newX);
	void setYCoord(double newY);


	//member functions
	double SqrDistanceTo(const Point &pointToCompare);
};

#endif
