#include <stdio.h>


FILE* giveMeAnOpenFile(){
 	return fopen("user.data","w");
}

int main(){
	int firstInt;
	int secondInt;
	FILE* userDataFile = giveMeAnOpenFile();
	printf("enter an integer: ");
	scanf("%d",&firstInt);
	printf("enter another integer: ");
	scanf("%d",&secondInt);
	fprintf(userDataFile, "%d %d",firstInt,secondInt);
	fclose(userDataFile);
	return 0;
}
