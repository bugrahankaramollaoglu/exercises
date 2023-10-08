/* Count the number of divisors of a positive integer n.

Random tests go up to n = 500,000.

4 --> 3 (1, 2, 4)
5 --> 2 (1, 5)
12 --> 6 (1, 2, 3, 4, 6, 12)
30 --> 8 (1, 2, 3, 5, 6, 10, 15, 30) */

#include <stdio.h>

int divisors(int n)
{

    int i = 1;
    int counter = 0;
    while (i < 500000)
    {
        if (n % i == 0)
            counter++;
        i++;
    }
    return counter;
}

int main()
{
    printf("%d", divisors(24));
}