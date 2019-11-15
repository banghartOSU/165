#include<iostream>

int func(int* ptr, int val){
	int temp = *ptr;
	return temp;

}






int main() {
	int x = 8;
	int y = 13;

	int result = func(&x, y);
	std::cout << result << std::endl;

	return 0;	
}