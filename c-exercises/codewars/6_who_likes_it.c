/*
[]                                -->  "no one likes this"
["Peter"]                         -->  "Peter likes this"
["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"
return must be an allocated string
do not mutate input
For 4 or more names, the number in "and 2 others" simply increases.
*/

#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

// result string must be a heap-allocated, nul-terminated string
// to be freed by the tests suite

// someone else's solution
char *likes(size_t n, const char *const names[n])
{

    char *ret = malloc(sizeof(char) * 50);
    int step = 0;
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        sprintf(ret, "no one likes this");
    }
    if (n == 1)
    {
        sprintf(ret, "%s likes this", names[0]);
    }
    if (n == 2)
    {
        sprintf(ret, "%s and %s like this", names[0], names[1]);
    }
    if (n == 3)
    {
        sprintf(ret, "%s, %s and %s like this", names[0], names[1], names[2]);
    }
    if (n >= 4)
    {
        sprintf(ret, "%s, %s and %d others like this", names[0], names[1], n - 2);
    }

    return ret;
}