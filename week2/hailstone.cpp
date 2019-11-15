/*****************************
 * Author: Thomas Banghart
 * Date: 04/04/2019
 * Description: This program counts the number of iterations of a hailstone sequence 
 * before reaching "1". A hailstone sequence starts with some positive integer. 
 * If that integer is even, then you divide it by two to get the next integer in the sequence, 
 * but if it is odd, then you multiply it by three and add one to get the next integer in the sequence. 
 * Then you use the value you just generated to find out the next value, according to the same rules.
 *****************************/

// #include<iostream>

// int hailstone(int);

// int main(){
// 	int numSteps;

// 	numSteps = hailstone(3);
// 	std::cout << "Odd: " << numSteps <<std::endl;

// 	numSteps = hailstone(16);
// 	std::cout << "Even: " << numSteps <<std::endl;


// 	return 0;
// }

//Take some int thats passed to the function
int hailstone(int someInt){
//counter for number of steps this will take
	int numSteps = 0;
//we want to stop this function when we hit "1" so wrap everything in a while loop
	while(someInt != 1){
//if the number is divisible by 2, we know it's even and divide by two.
		if(someInt % 2 == 0){
				someInt = someInt/2;
			}
//if the number is not even, then it is odd so we multiply by "3" and add "1"
		else{
			someInt = (someInt*3)+1;
			}
//for every iteration of the while loop we'll add one to our counter
		numSteps++;
		}
//return the total number of interations 
	return numSteps;
}