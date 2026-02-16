#include <stdio.h>

// arithmetic operators in C
// note that in every calculation for z, previous value for z will get overwritten.

int main (){

	int x = 10;
	int y = 5;
	int z = 0;

	z = x + y;
	printf("%d\n", z);

	z = x - y;
	printf("%d\n", z);

	z = x * y;
	printf("%d\n", z);

	z = x / y; // note that since all variables are in int, division will 
		   // execute as integer division, therefore removes all decimal points.
		   // if decimal points are required either change data type or 
		   // typecast one variable to float or double.
	printf("%d\n", z);

	z = x % 2;
	printf("%d\n", z);

	x++;
	printf("%d\n", x);

	x--;
	printf("%d\n", x);

	x+=2; //shortened version of x= x+2
	printf("%d\n", x);

	x-=2;
	printf("%d\n", x);

	x*=2;
	printf("%d\n", x);

	x/=2;
	printf("%d\n", x);

	return 0;
}


