/*****************************
 * Author: Thomas Banghart
 * Date: 04/04/2019
 * Description: Ths program asks a user to input an integer and then 
 * has another user guess the original input. The program lets the user know
 * if the guess is too high or too low. It also keeps track of number of guesses
 * the user has made. 
 *****************************/

#include <iostream>

int main(){

	int numGuesses = 0,
		targetValue,
		guess;

	//Setting the target value that will be guessed
	std::cout << "Enter the number for the player to guess." << std::endl;
	std::cin >> targetValue; 


	std::cout << "Enter your guess." << std::endl;
	//While loop that keeps game going untill users successfully guesses target value
	while(guess != targetValue){
		
		std::cin >> guess;
		numGuesses++;

		//two if statements that let the user know if their guess was too high or too low the targer
		if(guess > targetValue){
			std::cout << "Too high - try again." << std::endl;
		}

		if(guess < targetValue){
			std::cout << "Too low - try again." << std::endl;
		}
	}

	//Message after user succesfully guesses the original targer value
	std::cout << "You guessed it in " << numGuesses << " tries." << std::endl;


	return 0;
}