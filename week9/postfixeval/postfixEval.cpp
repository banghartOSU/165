/*****************************
 * Author: Thomas Banghart
 * Date: 05/29/2019
 * Description: This is the implementation file for the 
 * postfixEval class
 *****************************/

#include<cstring>
#include<cctype>
#include<cstdlib>
#include<stack>
#include<iostream>

//Function prototypes
bool isValidOperator(char charToCheck);
double doMath(double lhs, double rhs, char operand);

/************************************************************
 * postfixEval that uses a stack<double> (from the Standard Template Library) 
 * to evaluate postfix expressions.  It takes a C-style string parameter 
 * that represents a postfix expression and returns a double which is the 
 * result of that expression
 * **********************************************************/
double postfixEval(char str[]){
	std::stack<double> numStack;
	char* currentChar;
	double num;

	currentChar = strtok(str, " ");
	while(currentChar != NULL){	
		if(isdigit(*currentChar)){
			num = atof(currentChar);
			numStack.push(num);
		}

		if(isValidOperator(*currentChar)){
			double rhs = numStack.top();
			numStack.pop();
			double lhs = numStack.top();
			numStack.pop();

			double result = doMath(lhs, rhs, *currentChar);
			numStack.push(result);
		}
		//So we continue on with the next token of the original string
		//rather than starting as a "new" string. strtok() expects NULL
		//as an indicator that we're starting from the end of the last token.
		currentChar = strtok(NULL, " ");
	}
	return numStack.top();
}
/************************************************************
 * isValidOperator() is a helper function that checks to verify that
 * the string token is in fact a valid operator. 
 * **********************************************************/
bool isValidOperator(char charToCheck){
	return charToCheck == '+' || charToCheck == '-' ||
		charToCheck == '/' || charToCheck == '*';
}


/************************************************************
 * doMath() is a helper function that takes care of the arithmetic 
 * once the stack has an operand to work with. 
 * **********************************************************/
double doMath(double lhs, double rhs, char operand){
	double result = 0.0;
	switch(operand){
		case '+':
			result = lhs + rhs;
			break;
		case '-':
			result = lhs - rhs;
			break;
		case '*':
			result = lhs * rhs;
			break;
		case '/':{
			if(rhs == 0){
				std::cout << "ERROR: Cannot divide by \'0\'." << std::endl;
				exit(1);
			}
			result = lhs/rhs;
			break;
		}
	}
return result;
}

// int main(){
// 	char str[] = "25 0 /";
// 	std::cout << postfixEval(str) << std::endl;
// 	return 0;

// }











