/*****************************************************
 * Author: Thomas Banghart
 * Date: 06/06/2019
 * Description: This is the implementation file for the Triangle class
 *****************************************************/
#include"Triangle.hpp"
#include<math.h>
#include<iostream>

//Constructor
Triangle::Triangle(Point *point1,Point* point2,Point *point3){
	setVertex1(point1);
	setVertex2(point2); 
	setVertex3(point3); 
}

//Getters
Point* Triangle::getVertex1() const{
	return vert1;
}
Point* Triangle::getVertex2() const{
	return vert2;
}
Point* Triangle::getVertex3() const{
	return vert3;
}

//Setters
void Triangle::setVertex1(Point* point1){
	vert1 = point1;
}
void Triangle::setVertex2(Point* point2){
	vert2 = point2;
}
void Triangle::setVertex3(Point* point3){
	vert3 = point3;
}

//Member "edge" functions 
double Triangle::edge1(){
	return vert1->SqrDistanceTo(*vert2);
}
double Triangle::edge2(){
	return vert2->SqrDistanceTo(*vert3);
}
double Triangle::edge3(){
	return vert3->SqrDistanceTo(*vert1);
}
/*****************************************************
* checkTriangle() takes three squared lengths of edges 
* and determines the type of the triangle:
* It will return 1 if the triangle is equilateral.
* It will return 2 if the triangle is isosceles.
* It will return 3 if the triangle is right-angled.
* It will return 4 if the triangle is both isosceles and right-angled.
* It will return 0 if the triangle is scalene but not right-angled.
*****************************************************/
int Triangle::checkTriangle(double e1, double e2, double e3){	
	int triangleType = 0;

	//Equilateral
	double epsilon = 0.00000001;
	if(fabs(e1-e2) < epsilon && fabs(e2-e3) < epsilon && fabs(e1-e3) < epsilon){		
			return 1;	
	}
	//Isosceles 
	if(e1 == e2  || e2 == e3 || e3 == e1) {
			triangleType += 2;
	} 
	//Right triangle
	if(e1 + e2 == e3 || e2 + e3 == e1 || e3 + e1 == e2) {
			triangleType += 3;	
	}
	//Check if both a isosceles and right 
	if(triangleType == 5){
		return 4;
	}
	return triangleType;
}


// //Testing Main
// int main(){
// Point p1;
// Point p2(sqrt(3),1);
// Point p3(0, 2);

// Triangle T1(&p1, &p2, &p3);
// double e1=T1.edge1();
// double e2=T1.edge2();
// double e3=T1.edge3();

// int chkTrinagle = T1.checkTriangle(e1,e2,e3);


// std::cout << chkTrinagle << std::endl;
// 	return 0;
// }








