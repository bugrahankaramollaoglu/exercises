/* kücükleri büyük harfe cevirir */

#include <stdio.h>
#include <ctype.h>
char *mystrupr(char *str)
{
    char *temp = str;

    while (*str != '\0')
    {
        if (islower(*str))
            *str = toupper(*str);
        ++str;
    }
    return temp;
}