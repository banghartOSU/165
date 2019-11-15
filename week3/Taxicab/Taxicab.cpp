/********************************************************************************* 
 * Author: Thomas Banghart
 * Date: 04/17/2019
 * Description: Implementation details for the Taxicab class.
 *************************************************************************************/

#include "Taxicab.hpp"
#include<cmath>

//Constructors 
Taxicab::Taxicab(){
	xCoord = 0;
	yCoord = 0;
	distanceTraveled= 0;
}

Taxicab::Taxicab(int newXCoord, int newYCoord){
	xCoord = newXCoord;
	yCoord = newYCoord;
	distanceTraveled = 0;
}

//Getters
int Taxicab::getXCoord(){
	return xCoord;
}

int Taxicab::getYCoord(){
	return yCoord;
}

int Taxicab::getDistanceTraveled(){
	return distanceTraveled;
}

/******************************************
 * FUNCTION: Taxicab::moveX
 * Changes the xCoord and distance traveled
 ******************************************/
void Taxicab::moveX(int newXCoord){
	xCoord += newXCoord;
	distanceTraveled += std::abs(newXCoord);

}

/******************************************
 * FUNCTION: Taxicab::moveY
 * Changes the yCoord and distance traveled
 ******************************************/
void Taxicab::moveY(int newYCoord){
	yCoord += newYCoord;
	distanceTraveled += std::abs(newYCoord);
}
