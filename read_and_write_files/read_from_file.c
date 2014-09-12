#include <stdio.h>


void readNumbers(int* aNumber, int* anotherNumber){
 	FILE* userNumbersFile = fopen("user.data","r");
	fscanf(userNumbersFile, "%d %d", aNumber, anotherNumber);
	fclose(userNumbersFile);
}

int main(){
	int firstInt;
	int secondInt;
	readNumbers(&firstInt, &secondInt);
	printf("%d * %d = %d\n",firstInt,secondInt,firstInt*secondInt);
	printf("%d + %d = %d\n",firstInt,secondInt,firstInt+secondInt);
	printf("%d - %d = %d\n",firstInt,secondInt,firstInt-secondInt);
	return 0;
}
