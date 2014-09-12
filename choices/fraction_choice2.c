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


void checkDoubles(){
 	
	double aNumber = 0.25;
	if ((aNumber > 0 && aNumber < 1) || (aNumber < 0 && aNumber > -1)){
		printf("%f is only fractional.\n", aNumber);
	}
	else{
		printf("%f has a whole number component.\n", aNumber);
	}
}

int main(){
	checkDoubles();
	return 0;
}