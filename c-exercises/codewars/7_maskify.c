/* Your task is to write a function
maskify, which changes all but the last four characters into '#'. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// string: bugrahankara masked: ########kara
char *maskify(char *masked, const char *string)
{
    masked = malloc(strlen(string) + 1);
    int len = strlen(string) - 4; // len=8
    int len2 = 0;
    int x;
    for (x = 0; x < len; x++)
    {
        masked[x] = '#';
        len2++;
    }
    for (int a = 0; a < 4; a++)
    {
        masked[x] = string[len2];
        len2++;
        x++;
    }
    masked[x] = '\0'; // write to masked
    return masked;    // return it
}

/* clever af
#include <string.h>

char *maskify (char *masked, const char *string)
{
  int n = strlen(strcpy(masked, string)) - 4;
  if (n > 0) memset(masked, '#', n);
  return masked;
} */



int main()
{
    char *a = "";
    char *b = "abcd";
    printf("%s", maskify(a, b));
}