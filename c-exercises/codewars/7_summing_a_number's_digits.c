/* Write a function named sumDigits which takes a number as input and returns
the sum of the absolute value of each of the number's decimal digits.  */

#include <stdio.h>

/* my algo
int sum_digits(int n)
{

    int sum = 0;

    if (n == 0)
        return 0;
    else if (n < 0)
        n = -n;

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}  */
 

  
