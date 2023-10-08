/* Create a function that takes 2 integers
in form of a string as an input,
and outputs the sum (also as a string): */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *sum_strings(char *sum, const char *a, const char *b)
{
    int x = atoi(a), y = atoi(b);
    sprintf(sum, "%d", x + y);
    return sum;
}