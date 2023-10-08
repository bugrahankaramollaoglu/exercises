/* Program to accept a number and print that number in reverse order.
Ex:- 1024
Output:- 4201 */

#include <stdio.h>

int reverser(int num)
{
    while (num)
    {
        printf("%d", num % 10);
        num /= 10;
    }
}

int main()
{
    reverser(234925);
    printf("\n");
}