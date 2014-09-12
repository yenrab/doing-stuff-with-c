#include <stdio.h>


void crashIt(){
 	
	double numbers[7] = {0.25, 11.003, -2.14, 0.14, 20001.3, -.000001, -10.0};
	numbers[7] = 45.9
}

int main(){
	crashIt();
	return 0;
}