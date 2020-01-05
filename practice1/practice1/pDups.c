#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>


int hasPairWithSum(int* data, int sum)
{
    int sizeData = sizeof(data) / sizeof(data[0]);
    printf("The data has %d elements\n", sizeData);

    //  int unorderedComplements*
    return 0;
}



int main(void)
{
    int badData[] = { 1,2,3,9 };
    int sizeData = sizeof(badData) / sizeof(badData[0]);
    printf("The data has %d elements\n", sizeData);
    hasPairWithSum(badData, 8);

    return 0;
}



//#include "pDups.h"
//#include <string.h>
//
// // citation: https://www.dreamincode.net/forums/topic/163330-how-to-take-string-input-in-c-dynamically/
//void pDups()
//{
//
//	printf("Please enter a string: ");
//	int i;
//
//	// initial size
//	int maxStringLength = 100;
//	char* userString = malloc(maxStringLength * sizeof(char));
//	scanf("%s", userString);
//
//	printf("Your string is %d chars long and reads %s\n", strlen(userString), userString);
//	
//	// create two arrays, one for the alphabet and one for the count
//	char letters[52];
//	
//	// fill out uppercase
//	for (i = 0; i < 26; i++)
//		letters[i] = i + 65;
//
//	// fill out lowercase
//	for (i = 0; i < 26; i++)
//		letters[i + 26] = i + 97;
//
//	// run through the user's string and take note
//
//
//
//	/*for (i = 0; i < 52; i++)
//		printf("%d: %c\n", i, letters[i]);*/
//
//	free(userString);
//
//	return 0;
//
//}