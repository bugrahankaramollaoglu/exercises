#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

bool is_palindrome(const char *str)
{
    // Abba
    int a;
    int len = strlen(str);
    int len2 = len;
    for (a = 0; a < len / 2; a++)
    {
        if (tolower(str[a]) != tolower(str[len2 - 1]))
            return 0;
        len2--;
    }
    return 1;
}
