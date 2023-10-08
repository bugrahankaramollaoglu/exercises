/*
(Sum of Digits) Write a function that takes an integer and returns the sum of its digits. For
example, given the number 7631, the function should return 17.
 */

#include <stdio.h>

int fun(int nb)
{
    int sum = 0;
    while (nb)
    {
        sum += nb % 10;
        nb /= 10;
    }
    return sum;
}

int main()
{
    printf("%d", fun(4253));
}