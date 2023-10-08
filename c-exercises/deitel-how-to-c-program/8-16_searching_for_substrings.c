#include <string.h>
#include <stdio.h>

int main()
{
    char string[100];
    char search[20];
    char searchPtr[80];
    char searchPtr2[80];
    printf("enter a string:");
    scanf("%s", string);
    printf("\nenter a search key:");
    scanf("%s", search);
    strcpy(searchPtr, strstr(string, search));
    printf("%s", searchPtr);
    printf("\n------next------");
    searchPtr2 = strstr(searchPtr, search);
    printf("\nsecond occurence is: %s", searchPtr2);
}