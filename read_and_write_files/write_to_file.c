#include <stdio.h>


void saveNumbers(int aNumber, int anotherNumber){
 	FILE* userNumbersFile = fopen("user.data","w");
	fprintf(userNumbersFile, "%d %d", aNumber, anotherNumber);
	fclose(userNumbersFile);
}

int main(){
	int firstInt;
	int secondInt;
	printf("enter an integer: ");
	scanf("%d",&firstInt);
	printf("enter another integer: ");
	scanf("%d",&secondInt);
	saveNumbers(firstInt, secondInt);
	return 0;
}
