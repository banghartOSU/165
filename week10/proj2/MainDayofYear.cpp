#include<iostream>
#include"DayofYear.hpp"

int main(){
	DayofYear doy;
	int optionNum = 0;
	std::cout << "Please choose an option (1 or 2):" << std::endl;
	std::cin >> optionNum;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

	if(optionNum == 1)
		doy.option1();

	if(optionNum == 2)
		doy.option2();

	return 0;
}