#include <stdio.h>


struct ClothingCustomer{

	char name[12];
	int age;
	double inseam;
};

struct ClothingCustomer createACustomer(){
	
		struct ClothingCustomer aCustomer;

		printf("Enter customer name: ");
		scanf("%s",aCustomer.name);

		printf("Age: ");
		scanf("%d",&aCustomer.age);

		printf("Inseam: ");
		scanf("%lf",&aCustomer.inseam);
		return aCustomer;
}

int main(){

	FILE* customersFile = fopen("customers.data","w");
	for (int i = 0; i < 5; i++)
	{
		struct ClothingCustomer aCustomer = createACustomer();
		fprintf(customersFile, "%s %d %lf\n", aCustomer.name, aCustomer.age, aCustomer.inseam);
	}
	fclose(customersFile);
	return 0;
}