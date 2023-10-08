/*  Program to accept a number and print sum of it’s digits. */

#include <stdio.h>

int summer(int nb)
{
    int sum = 0;
    while (nb)
    {
        sum += nb % 10;
        nb /= 10;
    }
    return sum;
}

/* another version by smelse
// sum of digits calculator program

#include <stdio.h>
#include <string.h>

int func(int val)
{
    int sum = 0;
    while (val)
    {
        sum += val % 10;
        if (sum > 10)
            sum = 1 + sum % 10;
        val /= 10;
    }
    return sum;
}
*/

int main(void)
{
    printf("%d\n", summer(2357));
}