/********************************************************************************* 
 * Author: Thomas Banghart
 * Date: 04/11/2019
 * Description:  
 *************************************************************************************/

#include "Taxicab.hpp"
#include<cmath>

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

int Taxicab::getXCoord(){
	return xCoord;
}

int Taxicab::getYCoord(){
	return yCoord;
}

int Taxicab::getDistanceTraveled(){
	return distanceTraveled;
}

void Taxicab::moveX(int newXCoord){
	xCoord += newXCoord;

	distanceTraveled += std::abs(newXCoord);

}

void Taxicab::moveY(int newYCoord){
	yCoord += newYCoord;

	distanceTraveled += std::abs(newYCoord);
}
