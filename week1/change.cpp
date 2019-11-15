/*****************************
 * Author: Thomas Banghart
 * Date: 04/03/2019
 * Description: This program asks users to input an amount in cents
 * less than a dollar and then outputs the amount of change thier amount would 
 * equate to in quarters, dimes, nickels, and pennies. 
 *****************************/

#include <iostream>

int main(){
	const int QUARTER_VALUE = 25;
	const int DIME_VALUE = 10;
	const int NICKEL_VALUE = 5;
	const int PENNIES_VALUE = 1;

	int amount,
		num_quarters,
		num_dimes,
		num_nickels,
		num_pennies;

	std::cout << "Please enter an amount in cents less than a dollar." << std::endl;
	std::cin >> amount;

	num_quarters = amount/QUARTER_VALUE;
	amount %= QUARTER_VALUE;

	num_dimes = amount/DIME_VALUE;
	amount %= DIME_VALUE;

	num_nickels = amount/NICKEL_VALUE;
	amount %= NICKEL_VALUE;

	num_pennies = amount/PENNIES_VALUE;
	amount %= PENNIES_VALUE;

	std::cout << "Your change will be:" << std::endl;
	std::cout << "Q: "<< num_quarters << std::endl;
	std::cout << "D: "<< num_dimes << std::endl;
	std::cout << "N: "<< num_nickels << std::endl;
	std::cout << "P: "<< num_pennies << std::endl;

	return 0;
}