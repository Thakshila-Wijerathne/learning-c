#include <stdio.h>

// basic recap of control statements including if-else, for/while loops, 
// nested ifs, and switch statements using examples.

int main(){

	int z = 0;
	printf("using a nested-if: \n");
	printf("enter an integer value: ");
	scanf("%d", &z);
	
	//nested if (almost similar to if-else but it can execute multiple choices (>2).
	if(z>10){
		printf("given number is larger than 10\n");
	}
		else if(z==10){
			printf("given number is equal to 10\n");
		}
			else if(z<10){
				printf("given number is less than 10\n");
	}
	
	//for loop
	int y = 0;
	printf("using a for loop to repeat a value 3 times\n");
	printf("enter another integer value: ");
	scanf("%d", &y);
	for (int x = 0; x<3; x++){
		printf("%d\n", y);
	}

	//while loop
	printf("using a while loop to display numbers from 1-10\n");
	int i = 0;
	while(i<11){
		printf("%d\n", i);
		i++;
	}

	//switch case
	int w = 0;
	printf("switch case for exact values:\n");
	printf("enter another integer: ");
	scanf("%d", &w);

	switch(w){
		case 10:
			printf("given number is 10.\n");
			break;
		default:
			printf("given number is not 10.\n");
			break;
	}

	return 0; 
}



