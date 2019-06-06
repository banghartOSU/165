#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include"Point.hpp"

class Triangle: public Point{
private:
	Point* vert1; 
	Point* vert2; 
	Point* vert3;

public:

	//constructor
	Triangle(Point* point1, Point* point2, Point* point3);

	//getters
	Point* getVertex1() const;
	Point* getVertex2() const;
	Point* getVertex3() const;

	//setters
	void setVertex1(Point* point1);
	void setVertex2(Point* point2);
	void setVertex3(Point* point3);

	//member functions
	double edge1();
	double edge2();
	double edge3();

	int checkTriangle(double e1, double e2, double e3);

};

#endif

