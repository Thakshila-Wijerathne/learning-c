#include <stdio.h>
#include <string.h>

//This is a Shopping cart program that I created as my first beginner level project. 

int main(){

	char name[50] = "";
	int item = 0;
	int quantity = 0;
	float total = 0.0f;

	printf("Welcome to Cart! Enter your name: ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name)-1] = '\0';

	printf("Hello %s! What would you like to buy today?\n\n", name);
	printf("Available Items: \n1-Strawberry packs (10 berries each), Unit Price is 500 lkr\n2-Mangoes, Unit price is 40 lkr\n3-Apples, Unit price is 50 lkr\n");
	printf("Enter the number of the item you would like to buy: ");
	scanf("%d", &item);

	printf("How many do you need? ");
	scanf("%d", &quantity);

	switch (item){
		case 1:
			printf("You have placed an order for %d strawberry packs.\n", quantity);
			total = 500 * quantity;
			printf("Your total is: %.2f\n", total);
			break;
		case 2:
			printf("You have placed an order for %d Mangoes.\n", quantity);
			total = 40 * quantity;
			printf("Your total is: %.2f\n", total);
			break;
		case 3:
			printf("You have placed an order for %d Apples. \n", quantity);
			total = 50 * quantity;
			printf("Your total is: %.2f\n", total);
			break;
		default:
			printf("Invalid number, choose a number from the list\n");
	}

	printf("\n-----------Checkout-----------\n");
	printf("Thank you for shopping with us!\n");

	return 0;
}
