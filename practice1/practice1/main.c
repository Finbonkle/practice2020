// Menu for the different challenges
#include "diamond.h"
#include "zipcar.h"
#include "printDuplicates.h"
#include "binaryTree.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{

	// display the options
	printf("Please select the challenge you would like to run:\n");
	printf("1. Diamond\n2. Undo/Redo\n3. Print Duplicates\n4. BinaryTree\n");
	//printf("5. Duplicate Chars\n");

	char choiceString[10];
	fgets(choiceString, 10, stdin);
	int userChoice = atoi(choiceString);

	switch (userChoice)
	{
		case 1:
			diamond();
			break;
		case 2:
			zipcar();
			break;
		case 3:
			pDups();
			break;
		case 4:
			mainBST();
			break;
		default:
			printf("No valid option selected.");
			break;

	}

	return 0;
}