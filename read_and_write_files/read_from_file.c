#include <stdio.h>


FILE* giveMeAnOpenFile(){
 	return fopen("user.data","r");
}

int main(){
	int firstInt;
	int secondInt;
	FILE* userDataFile = giveMeAnOpenFile();
	int found = fscanf(userDataFile,"%d %d",&firstInt,&secondInt);
	fclose(userDataFile);
	printf("%d * %d = %d\n",firstInt,secondInt,firstInt*secondInt);
	printf("%d + %d = %d\n",firstInt,secondInt,firstInt+secondInt);
	printf("%d - %d = %d\n",firstInt,secondInt,firstInt-secondInt);
	return 0;
}
