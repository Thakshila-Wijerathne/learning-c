#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};
struct Node* createNode(int value){
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode -> data = value;
	newNode -> next = NULL;
	return newNode;
};
struct Node* insertFront(struct Node *head, int value){
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode-> data = value;
	newNode -> next = head;
	head = newNode;
	return head;
};
struct Node* insertEnd(struct Node *head, int value){
	struct Node *newNode = createNode(value);
	if (head == NULL) return newNode;
	struct Node *current = head;

	while (current->next!=NULL){
		current = current->next;
	}
	current->next = newNode;
	return head;
};
struct Node* insertMid(struct Node *head, int value, int pos){
	struct Node *newNode = createNode(value);
	if (head == NULL) return newNode;
	if (pos == 1){ head = insertFront(head, value);}

	struct Node *current = head;

	for (int i = 1; i<pos-1; i++){
		current = current -> next;
	}
	if (current == NULL) return head;

	newNode -> next = current -> next;
	current -> next = newNode;
	return head;
};
struct Node* deleteFront(struct Node *head){
	if (head != NULL){
		struct Node *temp = head;
		head = head->next;
		free(temp);
	}
	else{
		printf("No elements present, invalid operation\n");
	}
	return head;
};
struct Node* deleteEnd(struct Node *head){
	struct Node *current = head;
	struct Node *prev = NULL;
	if (head == NULL){
		printf("List is empty, invalid operation.\n");
	}
	else if (head -> next != NULL){
		while (current -> next != NULL){
			prev = current;
			current = current->next;
		}
		struct Node *temp = current;
		prev -> next = NULL;
		free(temp);
	}
	else{
		head = deleteFront(head);
	}

	return head;
};
struct Node* deleteMid(struct Node *head, int pos){
	struct Node *current = head;
	if (head == NULL){
		printf("Invalid operation, list is empty.\n");
	}
	else if (head != NULL && head -> next == NULL){
		head = deleteFront(head);
	}
	else if (pos == 1) {
		head = deleteFront(head);
	}
	else{
		for (int i=1; i<pos-1; i++){
			if (current -> next !=NULL){
				current = current -> next;
			}
			else {
				printf("invalid position\n");
			}
		}
		struct Node *temp = current -> next; 
		current -> next = current -> next -> next;
		free(temp);
	}
	return head;
}

int main (){
	struct Node *head = NULL;

	head = createNode(10);

	head->next = createNode(20);

	head->next->next = createNode(30);

	head = insertFront(head, 40);

	head = insertMid(head, 15, 3);

	head = insertEnd(head, 50);

	head = deleteFront(head);

	head = deleteMid(head, 3);

	head = deleteEnd(head);

	struct Node *current = head;
	while (current!=NULL){
		printf("%d\n", current->data);
		current= current->next;
	}
	

	return 0;
}
