#include <stdio.h>
#define MAX 5

char stack[MAX];
int top = -1;

int isEmpty(){
	if (top == -1){
		printf("stack is empty\n");
		return 1;
	}
	else {
		return 0;
	}
}

int isFull(){
	if (top == MAX - 1){
		printf("stack is full\n");
		return 1;
	}
	else {
		return 0;
	}
}

int push(char letter){
	if (!isFull()){
		top++;
		stack[top] = letter;
		return top;
	}
	else {
		printf("stack overflow:\n");
	}
}
int pop(){
	if (!isEmpty()){
		printf("You've deleted the top character(%c) from the stack.\n", stack[top]);
		stack[top] = '\0';
		top--;
		return top;
	}
	else {
		printf ("stack underflow:\n");
	}
}

void peek(){
	if(!isEmpty()){
	printf("Current top is (%c) character.\n", stack[top]);
	}
}

int main(){
	int option = 0;
	printf("====Stack Program====\n");
	printf("Enter option when prompted:\n(type relevant digit and hit enter.)\n 1-Push\n 2-Pop\n 3-Peek\n 4-Exit\n");
	while(option!=4){
		printf("Enter option: ");
		scanf("%d", &option);
		switch(option){
			case 1:
				char letter = '\0';
				printf("Enter which character you want to push into the stack: ");
				scanf(" %c", &letter);
				push(letter);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			default:
				if(option!=4){
				printf("Invalid operation, enter a valid operation.\n");
				}
				break;
		}
	}
	printf("Exiting...\n");
	return 0;
}

