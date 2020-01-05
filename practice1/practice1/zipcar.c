#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "zipcar.h"

zipcar()
{
	/* to set this up, I want 3 dynamic arrays
	 one char array for the string in question*/
	char mainString[100] = "";
	// one for the previous iterations
	char oldStrings[50][100];
	// one for redo
	char undoList[50][100];

	// baseStrin

	// add a character
	//printf("maxSize is %d\n", maxSize);
	//printf("adding a p\n");
	addChar('p', &mainString);
	addChar('r', &mainString);
	addChar('a', &mainString);
	addChar('c', &mainString);
	addChar('t', &mainString);
	addChar('i', &mainString);
	addChar('c', &mainString);
	addChar('e', &mainString);
	//printf("maxSize is %d\n", maxSize);

	//printf("%s", mainString);


	// delete a character

	// undo the delete or add

	// redo the undo
}


addChar(char someChar, char *someString)
{
	//int e = _set_printf_count_output(1);

	//int len = 0;
	//printf("someString ");
	//printf("%s%n", someString, &len);
	//printf(" is %d chars long\n", len);

	//*maxSize = 50;
	someString[strlen(someString)] = someChar;

	printf("someString %s is %d chars long\n", someString, strlen(someString));
}