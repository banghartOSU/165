/*****************************
 * Author: Thomas Banghart
 * Date: 04/29/2019
 * Description: boxSort takes a unordered array of Box objects and orders them 
 * in descending order by volume so that the largest box appears first. It relies on the 
 * calcVolume() function of the Box class to determine each boxes volume. 
 *****************************/
#include"Box.hpp"
#include<iostream>


void boxSort(Box array[], int size){

	Box temp;
	bool madeAswap;

	do{
		madeAswap = false;
		for(int count = 0; count < (size-1); count++){
			if(array[count].calcVolume() < array[count+1].calcVolume()){
				temp = array[count + 1];
                array[count + 1] = array[count];
                array[count] = temp;
                madeAswap = true;

			}
		}
	} while(madeAswap);
}


// void testFunction(Box arr[], int size){
// 	for(int i = 0; i < size; i++){
// 		std::cout << i << ": " << arr[i].calcVolume() << std::endl; 
// 	}
// }



// int main(){
// 	const int SIZE = 4;
	
// 	Box box4(4.0,5.0,4.0);
// 	Box box3(3.0,2.5,3.6);
// 	Box box2(1.7,3.7,7.7);
// 	Box box1;

// 	Box boxArr[SIZE];
// 	boxArr[0] = box1;
// 	boxArr[1] = box2;
// 	boxArr[2] = box3;
// 	boxArr[3] = box4;


// 	std::cout << "Unsorted: " << std::endl;
// 	testFunction(boxArr, SIZE);
// 	std::cout << "\n" << std::endl;
// 	std::cout << "Sorted: " << std::endl;
// 	boxSort(boxArr, SIZE);
// 	testFunction(boxArr, SIZE);

// }