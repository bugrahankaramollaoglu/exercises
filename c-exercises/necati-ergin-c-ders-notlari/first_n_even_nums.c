/* Program to print first n even numbers. */

#include <stdio.h>

int main()
{
    printf("enter n: ");
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i < n)
    {
        if (i % 2 == 0)
            printf("%d ", i);
        i++;
    }
}