/* In this simple exercise, you will build a program
that takes a value, integer , and returns a list of
its multiples up to another value, limit . If
limit is a multiple of integer, it should be included as
well. There will only ever be positive integers
passed into the function, not consisting of 0. The
limit will always be higher than the base.
For example, if the parameters passed are (2, 6),
the function should return [2, 4, 6] as 2, 4, and 6
are the multiples of 2 up to 6. */

#include <stddef.h>
#include <math.h>

typedef unsigned int uint;

void find_multiples(uint n, uint limit, size_t *count, uint multiples[])
{
    // fill the multiples[] array and put the number of elements into count
    *count = 0;
    // (n=3, limit=20) --> [3,6,9,12,15,18] and count = 6
    uint a = 0;
    uint b = n;
    while (b <= limit)
    {
        if (b % n == 0)
        {
            *count += 1;
            multiples[a] = b;
            a++;
        }
        b++;
    }
}

/* in one line
#include <stddef.h>

typedef unsigned int uint;

void find_multiples (uint n, uint limit, size_t *count, uint multiples[])
{
  for(int i = 1; i <= (*count = limit / n); i++)  multiples[i-1] = n * i;
}  */

/* in one line2
#include <stddef.h>

typedef unsigned int uint;

void find_multiples (uint n, uint limit, size_t *count, uint multiples[]) {
  *count = 0; for(uint i = n; i <= limit; i += n) multiples[(*count)++] = i;
} */



