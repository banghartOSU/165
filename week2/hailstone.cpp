/*****************************
 * Author: Thomas Banghart
 * Date: 04/04/2019
 * Description: 
 *****************************/

// #include<iostream>

// int hailstone(int);

// int main(){
// 	int numSteps;

// 	numSteps = hailstone(7);
// 	std::cout << "Odd: " << numSteps <<std::endl;

// 	numSteps = hailstone(2);
// 	std::cout << "Even: " << numSteps <<std::endl;


// 	return 0;
// }

int hailstone(int someInt){
	int numSteps = 0;
	
	while(someInt != 1){
		
		if(someInt % 2 == 0){
				someInt = someInt/2;
			}

		else{
			someInt = someInt*3+1;
			}
		
		numSteps++;
		}
	return numSteps;
}