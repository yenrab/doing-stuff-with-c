#include <stdio.h>


struct ClothingCustomer{

	char name[12];
	int age;
	double inseam;
};

void createAndPrintCustomer(){
	
	struct ClothingCustomer aCustomer;

	printf("Enter customer name: ");
	scanf("%s",aCustomer.name);

	printf("Age: ");
	scanf("%d",&aCustomer.age);

	printf("Inseam: ");
	scanf("%lf",&aCustomer.inseam);

	printf("%s is %d years old and needs pants with an inseam of %lf\n", aCustomer.name,aCustomer.age,aCustomer.inseam);
}

int main(){

	createAndPrintCustomer();
	return 0;
}