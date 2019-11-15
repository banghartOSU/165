#include<iostream>

// int main(){

// 	int x = 1;

// 	switch(x){
// 		case 1: std::cout << "The ";
// 		case 2: std::cout << "cake ";
// 			break;
// 		case 3: std::cout << "is a ";
// 			break;
// 		default: std::cout << "lie";
// 	}
// }

int main(){
	int step = 9;
	int result = 0;
		for(int i = 1; i <step; i++)
			if(i % 5 == 2){
				result += i;
				std::cout << result << i <<std::endl;
			}
			if(step == result){
				std::cout << result << std::endl;
				std::cout << "true" <<std::endl;
			}
			else
				std::cout <<"false" << std::endl;
			

			return 0;
}