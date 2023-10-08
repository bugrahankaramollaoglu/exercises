/* Return the number (count) of vowels in the given string.

We will consider a, e, i, o, u as vowels for this Kata (but not y).

The input string will only consist of lower case letters and/or spaces.
 */

#include <stddef.h>

/* my algo
size_t get_count(const char *s)
{
    int counter = 0;
    for (char *myS = s; *myS; myS++)
    {
        if (*myS == 'a')
            counter++;
        if (*myS == 'e')
            counter++;
        if (*myS == 'i')
            counter++;
        if (*myS == 'o')
            counter++;
        if (*myS == 'u')
            counter++;

    }
    return counter;
} */

/* switch-case'li hali
size_t get_count(const char *s)
{
    size_t cnt = 0ul;
    if (!s)
        return 0ul;
    while (*s)
        switch (*s++) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            ++cnt;
            break;
        }
    return cnt;
} */

/* pointerli hali
size_t get_count(const char *s)
{
  size_t i;

  i = 0;
  while (*s)
  {
    if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
      i++;
    s++;
  }
  return (i);
} */

/* strrchr'li hali
size_t get_count(const char *s)
{
    size_t sum = 0;
    int i = 0;
    while(s[i] != '\0')
        sum += strrchr("aeiou", s[i++]) != NULL;
    return sum;
} */
