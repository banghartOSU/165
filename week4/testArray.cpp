
#include<iostream>

void transformArray(int*& arr, int size)
{
    int DOUBLED_SIZE = size * 2;

    // Create a new dynamically allocated array of double the size
    int* temp = new int[DOUBLED_SIZE];
    
    for (int i = 0; i < size; i++) {
        // Copy the original values of arr to temp
        temp[i] = arr[i];
        // Calculate the incremented number by one
        // and assign it to its i + sizeth position
        int incrByOne = arr[i] + 1;
        temp[i + size] = incrByOne;
    }
   
    // Delete the array and set to null pointer; 
    delete [] arr;
    arr = temp;

    temp = nullptr;
    delete temp;
    // Point the temp array to the array pointer
    
}

// int main(){

//     int* myArray = new int[3];
//    myArray[0] = 4;
//    myArray[1] = 2;
//    myArray[2] = 5;

//    transformArray(myArray, 3);
//    for (int i=0; i<6; i++)
//       std::cout << myArray[i] << std::endl;

//    delete []myArray;


//     return 0;
// }