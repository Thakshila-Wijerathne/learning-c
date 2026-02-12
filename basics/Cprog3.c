#include <stdio.h>

//format specifiers- special characters that begin with a % symbol, followed by a
//character that specifies the data type and optional modifiers (width, precision, 
//flags etc). They control how data is displayed or innterpreted.

int main () {

	int age = 21;
	float price = 19.99;
	double pi = 3.1415926535;
	char currency = '$';
	char name[] = "Pizza Guy";

	float price1 = 19.99;
	float price2 = 1.50;
	float price3 = -100.40;


	printf("%3d\n", age);
	printf("%3.2f\n", price);
	printf("%-3.2lf\n", pi); // the - sign here makes the number left justified
	printf("%c\n", currency);
	printf("%s\n", name);
	printf("%+7.2f\n", price1);
	printf("%+5.3f\n", price2);
	printf("%+5.2f\n", price3);

return 0;
}
