#include <string>
#include <iostream>

std::string toUpper(std::string str){

    for (int i =0; i < str.length(); i++){
        str[i] = toupper(str[i]); 
    }

    return str; 
}


bool isBefore(std::string first, std::string second){

    std::string string1 = toUpper(first); 
    std::string string2 = toUpper(second);
    

    return string1 < string2;
}


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

int main(){

    const int SIZE = 5;

    std::string s1 = "D";
    std::string s2 = "E";
    std::string s3 = "F";
    std::string s4 = "A";
    std::string s5 = "1";

    std::string sArray[] = {s1, s2, s3, s4, s5};

    std::cout << "Unsorted: " << std::endl;
    printArray(sArray, SIZE);
    
    std::cout << "\n" << std::endl;

    std::cout << "Sorted: " << std::endl;
    stringSort(sArray, SIZE);
    printArray(sArray, SIZE);


    return 0;
}





