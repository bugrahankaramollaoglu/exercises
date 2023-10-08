/* A pangram is a sentence that contains every single
letter of the alphabet at least once.
Given a string, detect whether or not it is a pangram.
Return True if it is, False if not. Ignore numbers and punctuation.
case is also irrelevant. */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// sadece 1 testten geçemeyen kodum
bool is_pangram(char *str_in)
{
    char x = 'a';
    int i = 0;
    if (strlen(str_in) < 26)
        return false;
    while (str_in[i])
    {
        if (str_in[i] >= 'A' && str_in[i] <= 'Z')
            str_in[i] += 32;
        i++;
    }
    i = 0;
    int counter = 0;
    int flag = 0; // abcdefghijklmnopqrstuvwxyz
    while (x <= 'z')
    {
        while (str_in[i])
        {
            if (str_in[i] == x)
            {
                counter++;
                flag = 1;
                break;
            }
            i++;
            if (flag == 1)
                break;
        }
        x++;
        i = 0;
        flag = 0;
    }
    if (counter == 26)
        return true;
    return false;
}

// diğer çözümlerden bir sey anlayamadim

int main()
{
    char *x = "abcdef";
    printf("%d", is_pangram(x));
}