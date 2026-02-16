#include <stdio.h>
#include <string.h>

// This is a mad libs game i created as my 2nd beginner lvl project.

int main(){
	char noun1[50] = "";
	char noun2[50] = "";
	char verb1[50] = "";
	char verb2[50] = "";
	char adj1[50] = ""; //short for adjective1 and so on
	char adj2[50] = "";
	char adj3[50] = "";


	printf("Welcome to the mad libs game!\n");

	printf("Enter a noun: ");
	fgets(noun1, sizeof(noun1), stdin);
	noun1[strlen(noun1)-1] = '\0';

	printf("Enter another noun: ");
	fgets(noun2, sizeof(noun2), stdin);
	noun2[strlen(noun2)-1] = '\0';

	printf("Enter a verb (use the proper form used in statements): ");
	fgets(verb1, sizeof(verb1), stdin);
	verb1[strlen(verb1)-1] = '\0';
	
	printf ("Enter another verb (use the proper form used in statements): ");
	fgets(verb2, sizeof(verb2), stdin);
	verb2[strlen(verb2)-1] = '\0';

	printf("Enter an adjective: ");
	fgets(adj1, sizeof(adj1), stdin);
	adj1[strlen(adj1)-1] = '\0';

	printf("Enter another adjective: ");
	fgets(adj2, sizeof(adj2), stdin);
	adj2[strlen(adj2)-1] = '\0';

	printf("Enter a third adjective: ");
	fgets(adj3, sizeof(adj3), stdin);
	adj3[strlen(adj3)-1] = '\0';

	printf("%s and %s went to a park %s and %s. They saw a %s plane and a %s frog talking about politics and there was a %s maid serving them noodles and pancakes.\n", noun1, noun2, verb1, verb2, adj1, adj2, adj3);
	printf("\nHope the statement was funny. Thanks for running the program!\n");

	return 0;
}

