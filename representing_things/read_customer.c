/*
 Copyright (c) 2014 Lee Barney
 Permission is hereby granted, free of charge, to any person obtaining a 
 copy of this software (the "Software"), 
 to deal in the Software without restriction, including without limitation the 
 rights to use, copy, modify, merge, publish, distribute, sublicense, 
 and/or sell copies of the Software, and to permit persons to whom the Software 
 is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be 
 included in all copies or substantial portions of the Software.
 
 
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
 INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
 PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT 
 HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF 
 CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE 
 OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 
 
 */
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