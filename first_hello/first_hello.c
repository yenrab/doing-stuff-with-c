//This is called a single line comment. Use it for short messages.

/*
 * This is called a multi-line comment. Comments are messages to 
 * anyone reading the source code. In the examples for this 
 * book have comments above lines of source code, like lines 15 
 * and 23, that describe what the code does.
 */


//
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
int main(){
	/*
	 * printf is a function that is part of the stdio library.
	 * it prints out data (output) to the terminal.
	 */
        printf("We are doing stuff !!!\n");
	/*
	 * Don't worry about return right now. We'll discuss it 
 	 * later.
	 */
        return 0; //This is also a comment and is ignored.
}
