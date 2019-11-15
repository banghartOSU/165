/*****************************
 * Author: Thomas Banghart
 * Date: 04/18/2019
 * Description: personSearch takes a sorted vector of Person objects and a name and uses a binary search 
 * to return the index of the Person object with that same name. 
 * If no match is found, it returns -1.
 *****************************/
#include"Box.hpp"


void testFunction(arr[], size){
	for(int i = 0; i < size; i++){
		std::cout << arr[i].calcVolume << std::endl; 
	}


}



int main(){
	const int SIZE = 4;
	
	Box box1(4.0,5.0,4.0);
	Box box2(3.0,2.5,3.6);
	Box box3(1.7,3.7,7.7);
	Box box4(3.6,2.1,4.5);

	Box boxArr[size];
	boxArr[0] = box1;
	boxArr[1] = box2;
	boxArr[2] = box3;
	boxArr[3] = box4;

	testFunction(boxArr, SIZE)

}