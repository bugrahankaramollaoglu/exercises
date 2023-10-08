/* Program to accept number and print it's factorial. */

#include <stdio.h>

int factorial(int nb)
{
    int i = 1;
    int sum = 1;
    while (i <= nb)
    {
        sum *= i;
        i++;
    }
    return sum;
}

int main()
{
    printf("%d\n", factorial(6));
}