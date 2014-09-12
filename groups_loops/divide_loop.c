#include <stdio.h>


void divideOneHundred(){
	
	int dividend;
	int divisor = 1.0;
	printf("enter an integer: ");
	scanf("%d",&dividend);
	printf("What integer would you like to divide %d by?\n", dividend);
	scanf("%d",&divisor);
	while(divisor != 0){
		int quotient = dividend/divisor;
		printf("%d / %d = %d\n", dividend, divisor, quotient);
		printf("enter an integer: ");
		scanf("%d",&dividend);
		printf("What integer would you like to divide %d by?\n", dividend);
		scanf("%d",&divisor);
	}
	printf("Sorry. You can't divide by zero.\n");
}

int main(){
	divideOneHundred();
	return 0;
}