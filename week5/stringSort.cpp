/************************************************************************************* 
 * Author: Thomas Banghart
 * Date: 04/27/2019
 * Description: stringSort sorts an array of C++ strings (std::string) into dictionary order.  
 * It takes two parameters, an array of strings, and the size of the array. Two helper functions
 * toUpper() and isBefore() are needed to make this program work.
 * ***********************************************************************************/

#include <string>
#include <iostream>


/******************************************************
 * FUNCTION: toUpper
 * Helper function while comparing stings. Used to convert every 
 * char in a string to uppercase using std::string toupper() function.
 * ****************************************************/
std::string toUpper(std::string str){

    for (int i =0; i < str.length(); i++){
        str[i] = toupper(str[i]); 
    }

    return str; 
}

/******************************************************
 * FUNCTION: isBefore
 * Compares two strings in a string array. 
 * Returns true if the first string is should appear before 
 * the second string if they were arranged alphanumerically 
 * and false otherwise.
 * ****************************************************/
bool isBefore(std::string first, std::string second){

    std::string string1 = toUpper(first); 
    std::string string2 = toUpper(second);
    
    return string1 < string2;
}

/******************************************************
 * FUNCTION: stringSort
 * The main function of the program
 * ****************************************************/
void stringSort(std::string arr[], int size){
    int startScan, 
        minIndex; 

    std::string minString;
    
    
    for (startScan = 0; startScan < (size - 1); startScan++) {
        minIndex = startScan;
        minString = arr[startScan];
      
        for (int index = startScan + 1; index < size; index++) {
          
            if (isBefore(arr[index], minString)) {
                minString = arr[index];
                minIndex = index;
            }
        }

        arr[minIndex] = arr[startScan];
        arr[startScan] = minString;
    }
}

void printArray(std::string arr[], int size){
    for(int i = 0; i < size; i++)
        std::cout << arr[i] << std::endl;
}

// int main(){

//     const int SIZE = 5;

//     std::string s1 = "AbcdedFG";
//     std::string s2 = "AbbD";
//     std::string s3 = "QRST";
//     std::string s4 = "SEVEN";
//     std::string s5 = "SEVEN";

//     std::string sArray[] = {s1, s2, s3, s4, s5};

//     std::cout << "Unsorted: " << std::endl;
//     printArray(sArray, SIZE);
    
//     std::cout << "\n" << std::endl;

//     std::cout << "Sorted: " << std::endl;
//     stringSort(sArray, SIZE);
//     printArray(sArray, SIZE);


//     return 0;
// }





