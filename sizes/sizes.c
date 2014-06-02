/* 
 * This include line allows us to use the standard input-output
 * library that is part of every C distribution.
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>

/*
 * main() is a type of thing called a function. Source code for
 * C applications consist of one or more functions. main() is a
 * special function. It is where your application begins running
 * when you run it.
 */
int main(){
	/*
	 * printf is a function that is part of the stdio library.
	 * it prints out data (output) to the terminal.
	 */
        printf("\n\nYou are using the %ld version of C\n",__STDC_VERSION__);
	printf("\n\nTypes are listed here from smallest to largest types.");
	printf("\n*************** integer-like types ***************\n\n");

	printf("The size of a char in bits is %d bits\n",CHAR_BIT); 
	printf("The value of a char can be from %d to %d\n",
			CHAR_MIN, CHAR_MAX);
	printf("The value of an unsigned char can be from %d to %d\n",
			0, UCHAR_MAX);
	printf("The value of a short can be from %d to %d\n",
                        SHRT_MIN, SHRT_MAX);
	printf("The value of an unsigned short can be from %d to %d\n",
                        0, USHRT_MAX);
	printf("The value of an int can be from %d to %d\n",
                        INT_MIN, INT_MAX);
	printf("The value of an unsigned int can be from %d to %d\n",
                        0, UINT_MAX);
	printf("The value of a long can be from %ld to %ld\n",
                        LONG_MIN, LONG_MAX);
	printf("The value of an unsigned long can be from %d to %lu\n",
                        0, ULONG_MAX);
	printf("The value of a long long can be from %llu to %llu\n",
                        LLONG_MIN, LLONG_MAX);
	printf("The value of an unsigned long long can be from %d to %llu\n",
                        0, ULLONG_MAX);
	printf("\n\n*************** floating-point types ***************\n\n");
	printf("The value of a float can be from %f to %f\n",
                        -FLT_MAX, FLT_MAX);
	printf("The value of a double can be from %e to %e\n",
                        -DBL_MAX, DBL_MAX);
	printf("The smallest positive value a double can be is %e\n",
                        DBL_MIN);
	printf("The value of a long double can be from %Le to %Le\n",
                        -LDBL_MAX, LDBL_MAX);
        return 0;
}
