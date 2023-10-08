/* Given an array of integers, return a new array with each value doubled.
For example:
[1, 2, 3] --> [2, 4, 6] */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int *maps(const int *arr, size_t size)
{
    // this is called dynamically allocated array
    int *new_arr = malloc(4 * size);

    if (new_arr == NULL)
        exit(EXIT_FAILURE);

    for (int i = 0; i < size; i++)
    {
        new_arr[i] = arr[i] * 2;
    }
    return new_arr;
}