/********************************************************************************* 
 * Author: Thomas Banghart
 * Date: 04/11/2019
 * Description: main testing file for the Taxicab class 
 *************************************************************************************/

#include"Taxicab.hpp"
#include<iostream>


int main(){
	Taxicab cab1;
	Taxicab cab2(5, -8);
	cab1.moveX(3);
	cab1.moveY(-4);
	cab1.moveX(-1);
	std::cout << cab1.getDistanceTraveled() << std::endl;
	cab2.moveY(7);
	std::cout << cab2.getYCoord() << std::endl;

	return 0;
}