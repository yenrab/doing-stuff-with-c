#include <stdio.h>


void checkDoubles(){
 	
	double aNumber = 0.25;
	if (aNumber > 0 && aNumber < 1){
		printf("%f is a fraction.\n", aNumber);
	}
	else{
		printf("%f is not a fraction.\n", aNumber);
	}
}

int main(){
	checkDoubles();
	return 0;
}