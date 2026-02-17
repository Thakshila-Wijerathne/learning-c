#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// 1. using math.h header file for better/a bit more advanced mathematical functions
// 2. stdlib.h is used for the abs function
/* 3. note that since the values for x,y,z changes with each calculation according to the
    program structure, values used in progressing calculations would be different than
    initial. however the purpose of the program is to revise the functions offered by 
    math.h so it isn't relevant.*/


int main(){

	int x = 9;
	float z = 35.14;
	int y = -3;

	printf("initial values: \nx= 9, y = -3, z = 3.14\n");

	x = sqrt(x);
	printf("square root of x is %d\n", x);  //sqrt is used to square root the
						//given number. 

	x = pow(x,3);
	printf("the cube of x is %d\n", x);  //pow should give the power 
					     //as per the index we specified.
	
	z = round(z);
	printf("z rounded off is %f\n", z);  //round will give the rounded off 
					     //value for z. 

	z = ceil(z);
	printf("ceil of z is %f\n", z);  // ceil rounds the number to the next 
					 // larger value.
	
	z = floor(z);
	printf("z floored is %f\n", z);  //floor will remove all decimal places
					 //and show the integer value (regardless of 
					 //how close it is to the larger number).
	
	y = abs(y);
	printf("abs of y is %d\n", y); //abs (short for absolute) is 
				       //like modulus in math, it gives
			               //the distance from zero as a postive value.
	
	z = log(z);
	printf("the natural logarithm of z is %f\n", z);  //log() gives the natural
							  //logarithm
	
	z = sin(z);
	printf("the sine of z is %f\n", z);

	z = cos(z);
	printf("the cosine of z is %f\n", z);

	z = tan(z);
	printf("the tangent of z is %f\n", z);

	return 0;
}
