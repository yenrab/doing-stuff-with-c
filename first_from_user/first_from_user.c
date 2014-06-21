/*
 * This include line allows us to use the standard input-output
 * library that is part of every C distribution.
 */
#include <stdio.h>

/*
 * main() is a type of thing called a function. Source code for
 * C applications consist of one or more functions. main() is a
 * special function. It is where your application begins running
 * when you run it.
 */

int multiply(int firstNum, int secondNum){
        return firstNum * secondNum;
}

int main(){
	/*
	 * printf is a function that is part of the stdio library.
	 * it prints out data (output) to the terminal.
	 */
	int firstInt;
	int secondInt;
	printf("enter an integer: ");
	scanf("%d",&firstInt);
	printf("enter another integer: ");
	scanf("%d",&secondInt);
	int product = multiply(firstInt, secondInt);
	printf("%d * %d = %d\n",firstInt,secondInt,product);
	return 0;
}
