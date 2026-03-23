#include <stdio.h>
#include<string.h>

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
char pop(){
	if (!isEmpty()){
		char letter = stack[top];
		stack[top] = '\0';
		top--;
		return letter;
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

void reverse(char st[]){
	char rev[MAX];
	if (st[0] == '\0'){
		printf("Enter a string to reverse first.\n");
	}else{
			for (int i=0; i<MAX; i++){
				push(st[i]);
			}
			printf("Reversed String: ");
			for (int j = 0; j<MAX; j++){
				rev[j] = pop();
				printf("%c", rev[j]);
			}
		printf("\n");
	}
}

int main(){
	int option = 0;
	printf("====Stack Program====\n");
	printf("Enter option when prompted:\n(type relevant digit and hit enter.)\n 1-Push\n 2-Pop\n 3-Peek\n 4-String Reverse\n 5-Exit\n");
	while(option!=5){
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
			case 4:
				printf("Enter the string to be reversed\nMake sure the string is 5 characters max, longer strings will be read only upto the first 5 characters.\n");
				char st[MAX+1];
				st[0] = '\0';
				while(getchar() != '\n');
				fgets(st, MAX+1, stdin);
				st[strcspn(st, "\n")]='\0';
				reverse(st);
				break;
			default:
				if(option!=5){
				printf("Invalid operation, enter a valid operation.\n");
				}
				break;
		}
	}
	printf("Exiting...\n");
	return 0;
}

