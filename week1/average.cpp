/********************
* Thomas Banghart
* April , 2019
*********************/

#include <iostream>

int main(){
	double firstNum,
			secondNum,
			thirdNum,
			fourthNum,
			fifthNum,
			result;
	
	std::cout << "Please enter five numbers." << std::endl;
	std::cin >> firstNum;
	std::cin >> secondNum;
	std::cin >> thirdNum;
	std::cin >> fourthNum;
	std::cin >> fifthNum;

	result = (firstNum + secondNum + thirdNum + fourthNum + fifthNum)/5;

	std::cout <<  "The average of those numbers is " << std::endl << std::fixed<< result <<std::endl;

	return 0;

}