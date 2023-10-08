/* Simple, remove the spaces from the string, then return the resultant string.

You must return a new dynamically allocated string. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* this algo i wrote works, yet cannot pass codewars tests
char *no_space(const char *str_in)
{
    int a = 0;
    int i = 0;
    char *new_str;
    new_str = (char *)malloc(sizeof(char) * 1111);

    while (str_in[i] != '\0')
    {
        while (str_in[i] != ' ')
        {
            new_str[a] = str_in[i];
            i++;
            a++;
        }
        i++;
    }
    new_str[a] = '\0';

    return new_str;
}

*/

/* some guy's solution

char *no_space(char *strin) {
    // first getting the length of strtrin (str to be trimmed by spaces)
    int len = strlen(strin);

    // this is the length of new_str (that'll hold the trimmed string)
    int len2=0;

    // first calculating how many chars there are that are not spaces
    for (int i=0; i<len; i++) {
        if (strin[i] != ' ') {
            len2++;
        }
    }

    // then separating space with malloc as that amount of bytes plus NULL
    char *str = malloc(len2 * sizeof(char) + 1);

    // counter that'll be used for moving from one str to the new
    int j=0;
    for (int i=0; i<len; i++) {
        // move only those that are not spaces
        if (strin[i] != ' ') {
            str[j] = strin[i];
            j++;
        }
    }

    // put a NULL at the end
    str[len2] = '\0';

    return str;
} */

/* doing same work in just 3 lines of code
char *no_space(const char *str) {
  char* const ret = calloc(strlen(str)+1, sizeof(char));
  for (char* out = ret; *str!=0; str++) if (*str != ' ') *out++ = *str;
  return ret;
} */

/* smart
char *no_space(char *string)
{
  int i = -1; int j = 0;
  char *str = (char*)malloc(sizeof(char) * strlen(string) + 1);
  while (string[++i])
    if (string[i] != ' ')
      str[j++] = string[i];
  str[j] = '\0';
  return (str);
} */

/* basit
#include <stdlib.h>

char *no_space(char *strin) {

    int lens = strlen(strin);
    int i = 0;
    char *spaced_out = calloc(lens + 1, sizeof(char));

    while(*strin) {
        if(*strin != 32) {
            spaced_out[i++] = *strin;
        }
        *strin ++;
    }
    return spaced_out;
} */

int main(void)
{
    char *s = "$  bu    gr  a   $";
    printf("%s", no_space(s));
}