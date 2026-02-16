#include <stdio.h>
#include <string.h>


int main(){

	int age = 0;
	float gpa = 0.0f;
	char grade = '\0'; //null terminator character
	char name[60] = "";

	printf("Enter your age: ");
	scanf("%d", &age); //& is used to tell the program that we r gonna put a
			   //value in the address of the variable age.
	printf("Enter your GPA: ");
	scanf("%f", &gpa);

	printf("Enter your grade: ");
	scanf(" %c", &grade); //leaving a space b4 the %c tell the program to skip the
			     //newline character that is already in the input buffer.
			     //if the newline is not skipped, the user won't be able 
			     //to input a character when prompted.
	
	getchar(); //this is used here because there is no shortcut within fgets to 
		   //remove the newline character in the input buffer.
	printf("Enter your full name: ");
	fgets(name, sizeof(name), stdin);/*using scanf here is problematic because 
					   scanf cannot read  white spaces. so when the 
					   user input his name only the parts b4 a space
					   will be read. that is why fgets (file get 
					   string) function is used, because it can read 
					   the whole thing as a single string. however to
					   avoid having to change manually the size of 
					   the string to be read, whenever the size 
					   initialized is changed, sizeof function is used
					   to get the size of the variable.
					   fgets use (variable, variable size, stdin)
					   as its syntax. stdin means standard input.*/
	name[strlen(name)-1] = '\0';//sets the last character to be a null terminator
				    //so that the newline created by hitting enter
				    //is removed.


	printf("%d\n", age);
	printf("%.2f\n", gpa);
	printf("%c\n", grade);
	printf("%s\n", name);
	/* If the programmer moves the printf statement for the fgets to the top to make it
	  execute first, then it will create a newline b4 printing the rest. This is 
	  because when we hit the enter key to submit the inpput it also gets registered
	  as a newline for the string read by fgets.
	  To avoid this newline, we can use a function inside the header file <string.h>
	  that gives a lot of useful functions (used here is strlen) when working with
	  strings, as done above.*/

	return 0;
}
