#include <stdio.h>
#include <stdlib.h>

#include "diamond.h"

diamond()
{
	printf("Please enter desired width: ");

	char nString[10];

	fgets(nString, 10, stdin);

	int n = atoi(nString);

	// the diamond will be n*2 units high
	// and n units wide
	// stars are also staggered by spaces

	// first thing to do is to print the spaces
	// how many spaces?
	int space = n - 1;
	int lines = 2 * n;
	int currentLine = 0;
	int reverseFlag = 0;

	while (currentLine < lines)
	{
		// print the first set of spaces
		int i;
		for (i = 0; i <= space; i++)
			printf(" ");

		// print the ast
		int j;
		for (j = 0; j < n - space; j++)
			printf("* ");

		printf("\n");
		currentLine++;
		if (n - space < n && reverseFlag == 0)
			space--;
		else if (n - space == n && reverseFlag == 0)
			reverseFlag = 1;
		else
			space++;

	}
}