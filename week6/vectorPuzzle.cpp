/******************************
 * Author: Thomas Banghart
 * Date: 05/08/2019
 * Description: vectorPuzzle determines if a vector of integers passed 
 * to it is capabable of being "solved" based on the puzzle game described 
 * below:
 *
 * "You are given a puzzle consisting of a row of squares that contain 
 * non-negative integers, with a zero in the rightmost square.  
 * You have a token that starts on the leftmost square.  
 * On each turn, the token can shift left or right a number of squares equal 
 * to the value in its current square, but is not allowed to move off either end."
*******************************/
#include<iostream>
#include<vector>


//Function Prototypes 
bool isSolveable(std::vector<int>, int);

bool moveRight(std::vector<int>, int);

bool moveLeft(std::vector<int>, int);

//vectorPuzzle checks if the last element is zero and, if so passes it to 
//determine if the vector has a solution. 
bool vectorPuzzle(std::vector<int> vect){
	if(vect.back() != 0)
		return false;

	int start = 0;

	return isSolveable(vect, start);
}

/******************************************************
 * FUNCTION: isSolveable
 * The "meat" of the program. This function is responsible 
 * for checking if the puzzel is solved and where the 
 * "token" is located. 
 * ****************************************************/
bool isSolveable(std::vector<int> vect, int position){

	//Base case - if we've reached the end of the vector the puzzle can 
	//be solved
	if(position == vect.size()-1){
		return true;
	}

	//Send to helper function to see if it is first possible to move right
	if(moveRight(vect, position)){
		
		int newPos = position + vect[position];
		//To keep track of where we been, turn the old value to -1
		vect[position] = -1;
		
		return isSolveable(vect, newPos);
	}

	//if its not possible to move right, see if we can move left
	else if(moveLeft(vect, position)){
 		
 		int newPos = position - vect[position];
 		////To keep track of where we been, turn the old value to -1
		vect[position] = -1;

		return isSolveable(vect, newPos);	
	}

//if we can't move right or lef then the puzzle is not solveable
return false;

}
/******************************************************
 * FUNCTION: moveRight
 * Checks to see if it is possible to move the "token" 
 * to the right. If the position plus the value of the vector at 
 * that position is less than the size of the vector and if the number 
 * is not -1 (meaning we've already been to that position), return true.
 * ****************************************************/
bool moveRight(std::vector<int> vect, int position){

	int checkBounds = position + vect[position];

	if(checkBounds < (vect.size()) && vect[checkBounds] >= 0)
		return true;

	return false;
}

/******************************************************
 * FUNCTION: moveLeft
 * Same logic as moveRight but makes sure that we stay within bounds
 * to the left by subtracting. 
 * ****************************************************/
bool moveLeft(std::vector<int> vect, int position){
	
	int checkBounds = position - vect[position];

	if(checkBounds >= 0 && vect[checkBounds] >= 0)
		return true;

	return false;
}

// int main(){
// 	std::vector<int> vect;
// 	//Should be true:
// 	// vect.push_back(2);
// 	// vect.push_back(4);
// 	// vect.push_back(5);
// 	// vect.push_back(3);
// 	// vect.push_back(1);
// 	// vect.push_back(3);
// 	// vect.push_back(1);
// 	// vect.push_back(4);
// 	// vect.push_back(0);

// 	//Should be false: 
// 	// vect.push_back(1);
// 	// vect.push_back(3);
// 	// vect.push_back(2);
// 	// vect.push_back(1);
// 	// vect.push_back(3);
// 	// vect.push_back(4);
// 	// vect.push_back(0);





// 	std::cout << std::boolalpha << vectorPuzzle(vect) << std::endl;

// 	return 0;
// }