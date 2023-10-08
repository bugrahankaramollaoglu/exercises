/* Create a function that accepts 2 string
arguments and returns an integer of the count
of occurrences the 2nd argument is found in the first one.
If no occurrences can be found, a count of 0 should be returned. */

#include <stdio.h>
#include <stddef.h>

size_t str_count(const char *str, char letter)
{
    int i = 0;
    int counter = 0;
    while (str[i])
    {
        if (str[i] == letter)
            counter++;
        i++;
    }
    return counter;
}

/* pointerlarla çok daha kısa hali
size_t str_count(const char *str, char letter)
{
  int count = 0;
  while (*str) count += *str++ == letter;
  return count;
} */

/* garip bir yol
#include <stddef.h>

size_t str_count(const char *str_in, char letter) {
    char *ptr = str_in;
    size_t count = 0;
    while(*ptr)
        count += *ptr++ == letter;
    return count;
} */



int main(void)
{
    printf("%d", str_count("bugraaaaahan", 'a'));
}