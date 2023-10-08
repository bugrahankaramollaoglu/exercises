#include <stdbool.h>
#include <string.h>

bool xo(const char *str)
{
    int i = 0;
    int num_x = 0;
    int num_o = 0;
    while (str[i])
    {
        if (str[i] == 'x' || str[i] == 'X')
            num_x++;
        else if (str[i] == 'o' || str[i] == 'O')
            num_o++;
        i++;
    }
    if (num_x == 0 && num_o == 0)
        return true;
    if (num_x == num_o)
        return true;
    return false;
}

bool xo(const char *str)
{
    int x = 0, o = 0;
    char *str2 = str;
    for (; *str2; str2++)
    {
        if (tolower(*str2) == 'x')
            x++;
        else if (tolower(*str2) == 'o')
            o++;
    }
    return x == o;
}

/* bool xo (const char* str)
{
  unsigned x = 0, o = 0;
  for (char *p = str; *p; p++) {
      if      (tolower(*p)=='x') x++;
      else if (tolower(*p)=='o') o++;
  }
  return x == o;
} */
