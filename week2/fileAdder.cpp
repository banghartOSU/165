/*****************************
 * Author: Thomas Banghart
 * Date: 04/10/2019
 * Description: This program takes the name of the file that consists of integers, 
 * and then tries to open it. If the input file is there and can be opened, 
 * the program reads the list of integers in the file, which should have one integer per line. 
 * The program then adds together all the integers in the file, 
 * create an output file called sum.txt, write the sum to that file (just that number - no additional text), 
 * and then prints (to the console) "result written to sum.txt". 
 *****************************/

#include<iostream>
#include<fstream>
#include<string>

//Create file stream object 

int main(){
	int number;
	int sum;

	std::string fileName;
	std::ifstream inputFile;

	std::cout << "Please enter your filename." << std::endl;
	std::cin >> fileName;
	
	inputFile.open(fileName);
	if(inputFile){
		
		while(inputFile >> number){
			sum += number;
		}
	inputFile.close();
	
	std::ofstream outputFile;
	outputFile.open("sum.txt");

	outputFile << sum;

	outputFile.close();
	std::cout << "results written to sum.txt" << std::endl;


	}



	else {
		std::cout << "could not access file" << std::endl;
	}



return 0;


}