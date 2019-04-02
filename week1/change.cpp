/************************
 * Thomas Banghart
 * change.cpp
 ***********************/

#include <iostream>

int main(){
	const int QUARTER_VALUE = 25;
	const int DIME_VALUE = 10;
	const int NICKEL_VALUE =5;
	const int PENNIES_VALUE = 1;

	int amount,
		quarters, 
		dimes,
		nickels,
		pennies;
		
	std::cout << "Please enter an amount in cents less than a dollar."<< std::endl;
	std::cin >> amount;

	quarters = amount/QUARTER_VALUE;
	amount %= QUARTER_VALUE;

	dimes = amount/DIME_VALUE;
	amount %= DIME_VALUE;

	nickels = amount/NICKEL_VALUE;
	amount %= NICKEL_VALUE;

	pennies = amount/PENNIES_VALUE;
	amount %= PENNIES_VALUE;

	std::cout << "Your change will be:" <<std::endl;
	std::cout << "Quarters: "<< quarters << std::endl;
	std::cout << "Dimes: "<< dimes << std::endl;
	std::cout << "Nickels: "<< nickels << std::endl;
	std::cout << "Pennies: "<< pennies << std::endl;

	return 0;

}