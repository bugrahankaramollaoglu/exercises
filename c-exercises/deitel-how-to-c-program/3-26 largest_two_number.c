// find the two largest values of the 10 numbers. [Note: You may input each number only once.]

#include <stdio.h>

int main()
{
    // We'll initialize the max1 and max2 variables to value -2147483647, 
    // which is the smallest value an integer variable can store.
    int max1 = -2147483647;
    int max2 = -2147483647;

    // current number is n
    int n, counter;

    for (counter = 0; counter < 5; counter++)
    {
        printf("please enter a num:");
        scanf("%d", &n);
        
        /* Then, we'll use if statement to check if n is 
        greater than max1. If it is, we'll check if n
        is less than or equal to max2. In that case, n is
        the new second largest number. If n is greater 
        than max2, we'll set the max1 value to value of max2 
        and we'll set the value of max2 to n. */
        if (n > max1)
        {
            if (n <= max2)
            {
                max1 = n;
            }
            else
            {
                max1 = max2;
                max2 = n;
            }
        }
    }

    printf("the largest two are: %d and %d", max2, max1);
}