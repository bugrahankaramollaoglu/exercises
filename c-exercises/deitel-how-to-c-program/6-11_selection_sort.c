/* (Selection Sort) A selection sort algorithm for a
one-dimensional array has the following steps:
a) The smallest value in the array is found.
b) It is swapped with the value in the first position of the array.
c) The above steps are repeated for the rest of the
array starting at the second position and
advancing each time.
Eventually the entire array is divided into two parts:
the sub-array of items already sorted which is built up
from left to right and is found at the beginning, and
the sub-array of items remaining to be sorted, occupying
the remainder of the array. Write a program that sorts an
array of 10 integers using this algorithm. */

#include <stdio.h>

int main()
{
    int a[100], n, i, j, position, swap;

    printf("Enter number of elements:");
    scanf("%d", &n);

    printf("Enter %d Numbers:", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
    {
        position = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[position] > a[j])
                position = j;
        }
        if (position != i)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }

    printf("Sorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
