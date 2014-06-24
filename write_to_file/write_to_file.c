#include <stdio.h>


FILE* giveMeAnOpenFile(){
 	return fopen("user.data","w");
}

int main(){
	int firstInt;
	int secondInt;
	printf("enter an integer: ");
	scanf("%d",&firstInt);
	printf("enter another integer: ");
	scanf("%d",&secondInt);
	FILE* userDataFile = giveMeAnOpenFile();
	fprintf(userDataFile, "%d %d",firstInt,secondInt);
	fclose(userDataFile);
	return 0;
}
