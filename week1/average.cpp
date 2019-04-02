/*****************************
 * Author: Thomas Banghart
 * Date: 04/02/2019
 * Description: This program asks users to input six numbers,
 * then returns the average of those numbers.
 *****************************/

#include <iostream>

int main () {
	const int TOTAL_NUMBERS = 6;
   double firstNumber,
          secondNumber,
          thirdNumber,
          fourthNumber,
          fifthNumber,
          sixithNumber,
	      result;

   //Ask users for six numbers that will be used
   //to calculate the average
   std::cout << "Please enter six numbers." << std::endl;
   std::cin >> firstNumber;
   std::cin >> secondNumber;
   std::cin >> thirdNumber;
   std::cin >> fourthNumber;
   std::cin >> fifthNumber;
   std::cin >> sixithNumber;

   //Computes the average and stores it in result
   result = (firstNumber + secondNumber + thirdNumber
	     + fourthNumber + fifthNumber + sixithNumber) / TOTAL_NUMBERS;

   std::cout << "The average of those numbers is:" << std::endl;
   std::cout << result << std::endl;

   return 0;
}
