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
	//Two int variables - one to keep track of input and one of the sum
	int number;
	int sum;

	//String and ifstream object variables - string keeps the file to open
	//and the ifstream object opens it
	std::string fileName;
	std::ifstream inputFile;
	
	//ofstream object to make a file to write out to
	//string of output file 
	std::ofstream outputFile;
	std::string outputFileName = "sum.txt";

	//Prompt user to enter file name and hold it in the string variable
	std::cout << "Please enter your filename." << std::endl;
	std::cin >> fileName;
	
	//Use the open() method of the ifstream object to open the file
	inputFile.open(fileName);
	//If the file opens, begin streaming lines in
	if(inputFile){
		//stream each line into the number var and add to sum
		while(inputFile >> number){
			sum += number;
		}
	//close the file
	inputFile.close();
	
	//Create ofstream object of the name of "sum.txt"
	std::ofstream outputFile;
	outputFile.open(outputFileName);

	//Write sum to the file
	outputFile << sum;

	//Close the file and let the user know where you saved it.
	outputFile.close();
	std::cout << "results written to sum.txt" << std::endl;
	}


	//If the file fails to open, let the user know something went wrong
	else {
		std::cout << "could not access file" << std::endl;
	}



return 0;


}