#include <stdio.h>


void checkInts(){
 	
	int aNumber = 5;
	int remainder = 5 % 2;
	if(aNumber == 0){
		printf("0 is neither even nor odd.\n");
	}
	else if (remainder == 0)
	{
		printf("%d is even.\n", aNumber);
	}
	else{
		printf("%d is odd.\n", aNumber);
	}
}

int main(){
	checkInts();
	return 0;
}