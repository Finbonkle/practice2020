#include "sorting.h"
#include <stdlib.h>
#include <stdio.h>

// https://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm
void builtIn()
{
    int valuesI[] = { 5,7,3,2,7,3,8,66,-2 };
    char valuesC[] = { 'd','b','x','z','c', 'V', '3' };


    int n;
    int numValuesI = sizeof(valuesI)/sizeof(valuesI[0]);

    printf("Before sorting the int list is: \n");
    for (n = 0; n < numValuesI; n++)
        printf("%d ", valuesI[n]);

    qsort(valuesI, numValuesI, sizeof(int), cmpFunc);

    printf("\nAfter sorting the int list is: \n");
    for (n = 0; n < numValuesI; n++)
        printf("%d ", valuesI[n]);

    printf("\n");
    
    int numValuesC = sizeof(valuesC) / sizeof(valuesC[0]);

    printf("Before sorting the char list is: \n");
    for (n = 0; n < numValuesC; n++)
        printf("%c ", valuesC[n]);

    qsort(valuesC, numValuesC, sizeof(char), cmpFuncChar);

    printf("\nAfter sorting the char list is: \n");
    for (n = 0; n < numValuesC; n++)
        printf("%c ", valuesC[n]);


}

int cmpFunc(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int cmpFuncChar(const void* a, const void* b)
{
    return (*(const char*)a - *(const char*)b);
}