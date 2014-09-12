#include <stdio.h>


struct ClothingCustomer{

	char name[12];
	int age;
	double inseam;
};

void readAndPrintCustomers(){

	FILE* customersFile = fopen("customers.data","r");
	for (int i = 0; i < 5; i++){
		struct ClothingCustomer aCustomer;
		fscanf(customersFile, "%s %d %lf", aCustomer.name, &aCustomer.age, &aCustomer.inseam);
		printf("%s is %d years old and needs pants with an inseam of %lf\n", aCustomer.name,aCustomer.age,aCustomer.inseam);
	}
	fclose(customersFile);
}

int main(){

	readAndPrintCustomers();
	return 0;
}