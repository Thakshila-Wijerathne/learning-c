#include <stdio.h>
#include <math.h>
#include <ctype.h>

// this is a program to calculate the compund interest for a timeline and value that the 
// user inputs.

int main (){

	double principal = 0.0;
	char select;
	double rate = 0.0;
	double month = 0.0;
	double year = 0.0;
	double timesCompounded = 0.0;
	double total = 0.0;

	printf("----Compound Interest Calculator----\n");
	printf("Enter the initial investment amount: ");
	scanf("%lf", &principal);

	printf("Is the amount to be compounded monthly or annually? Enter M for monthly, Y for annually: ");
	scanf(" %c", &select);

	switch(tolower(select)){
		case 'm':
			printf("Enter the monthly rate (percentage value, without the symbol): ");
			scanf("%lf", &rate);
			printf("Enter the time period in months: ");
			scanf("%lf", &month);
			printf("Enter the times compounded per month: ");
			scanf("%lf", &timesCompounded);

			rate = rate / 100; 

			total =  principal * pow( 1 + rate / timesCompounded, timesCompounded * month);
			printf("total amount for %.2lf month(s) after interest is: %.2lf\n", month, total);
		break;
		case 'y':
			printf("Enter the yearly rate (percentage value, without the symbol): ");
			scanf("%lf", &rate);
			printf("Enter the time period in years: ");
			scanf("%lf", &year);
			printf("Enter the times compounded per year: ");
			scanf("%lf", &timesCompounded);

			rate = rate / 100;
			
			total = principal * pow( 1 + rate / timesCompounded, timesCompounded * year);
			printf("total amount for %.2lf year(s) after interest is: %.2lf\n", year, total);
		break;

		default: 
			printf("Invalid selection, please try again.\n");
	}

	printf("---End of program---");

	
	return 0;
}
