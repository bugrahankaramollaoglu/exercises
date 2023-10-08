/* Write a function that accepts an integer n 
and a string s as parameters, and returns 
a string of s repeated exactly n times.

6, "I"     -> "IIIIII"
5, "Hello" -> "HelloHelloHelloHelloHello"
*/

#include <string.h>
#include <stdio.h>

/* my algo
char *repeat_str(size_t count, const char *src)
{
    char *new;
    int a = 0;
    int b = 0;

    new = malloc(count * strlen(src) + 1);
    while (count)
    {
        while (src[a])
        {
            new[b] = src[a];
            a++;
            b++;
        }
        a = 0;
        count--;
    }
    new[b] = '\0';
    return new;
} */

/* strcat'li hali
#include <string.h>
#include <stdlib.h>

char *repeat_str(size_t count, const char *src) {
  char *result = calloc(((count * strlen(src)) + 1), sizeof(char));
  while (count--)
    strcat(result, src);
  return result;
} */

/* strcat'li 2. hali
char *repeat_str(size_t n, const char *s) {
  char *r = calloc(n * strlen(s) + 1, 1);
  while (n--) strcat(r, s);
  return r;
} */
