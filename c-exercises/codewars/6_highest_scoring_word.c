#include <stdio.h>
#include <stdlib.h>

/*
** @param str: a C-string containing only lowercase letters and spaces (' ')
** @return:    a C-string allocated on the heap containing the highest scoring word of str
*/

int num_of_words(char *str)
{
    int num = 0, i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            num++;
    }
    return num + 1;
}

char *highestScoringWord(const char *str)
{
    int i = 0;
    char *wo;
    int sum = 0;
    int numW = num_of_words(str);
    while (str[i])
    {
        
    }
    return calloc(1, 1);
}