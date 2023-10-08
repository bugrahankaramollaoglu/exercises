/* program to print from n to 1 using doWhile */

#include <stdio.h>

int main()
{
    int i = 1, n;
    printf("please enter a n:");
    scanf("%d", &n);
    i = n;
    do
    {
        printf("%d ", i);
        i--;
    } while (i >= 1);
}