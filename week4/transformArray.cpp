/*****************************
 * Author: Thomas Banghart
 * Date: 04/10/2019
 * Description: transformArray that takes two parameters 
 * a reference to a pointer to a dynamically allocated array of ints, 
 * and the size of that array. The function should replace the 
 * array with one that is twice as long, with the values from the original array 
 * followed by each of those values times 2
 *****************************/

#include<iostream>

//Pass the array pointer by reference as we want to directly 
//change the value of the pointer - i.e. what it is pointing to
void transformArray(int*& arr, int size)
{
    //take the original size and multiply 2
    int DOUBLED_SIZE = size * 2;

    //allocate space for a new array on the heap that is twice as large 
    int* temp = new int[DOUBLED_SIZE];
    
    //copy the contents of the original array over to the new one 
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
        //while still in the loop, multiple each value of the original array by 2
        int timesTwo = arr[i] * 2;
        //add the new value to the end of the array
        temp[i + size] = timesTwo;
    }
    //Once the new array is complete, we can delete the array that is 
    //being pointed to by the original pointer we passed and then point it 
    //to the newly created array.  
    delete[] arr;
    arr = temp;

    //No need to have multiple pointers pointing to the same array
    //so we'll just have it point to null
    temp = nullptr;
}

int main(){

   int* myArray = new int[3];
   myArray[0] = 4;
   myArray[1] = 2;
   myArray[2] = 5;

   transformArray(myArray, 3);
   
   for (int i=0; i<6; i++)
      std::cout << myArray[i] << std::endl;

   delete [] myArray;


    return 0;
}