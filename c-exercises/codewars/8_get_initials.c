/* Write a function to convert a name into initials.
This kata strictly takes two words with one space in between them.
The output should be two capital letters with a dot separating them.
It should look like this:
Sam Harris => S.H
patrick feeney => P.F
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* my algo, i know that its a bit verbose and novice
char *get_initials(char *full_name, char initials[4])
{
    int i = 0;
    char *name = malloc(sizeof(char)*strlen(full_name));
    strcpy(name, full_name);
    while (name[i])
    {
        if (name[i] >= 97 && name[i] <= 122)
            name[i] -= 32;
        i++;
    }

    i = 0;
    while (name[i])
    {
        while (name[i] != ' ')
            i++;
        break;
    }

    initials[0] = name[0];
    initials[1] = '.';
    initials[2] = name[i + 1];

    return initials; // return it
}
 */

/* used many of built-in functions, smart
char *get_initials (const char *full_name, char initials[4])
{
  char *space;
  initials[0] = toupper(full_name[0]);
  initials[1] = '.';
  
  space = strchr(full_name, ' ');
  
  initials[2] = toupper(space[1]);
  initials[3] = '\0';
  
  return initials; // return it
} */

/* another version of strchr()
char *get_initials (const char *full_name, char initials[4]) {
  initials[0] = toupper(*full_name);
  initials[1] = '.';
  initials[2] = toupper(*(strchr(full_name, ' ') + 1));
  initials[3] = '\0';
  return initials;
} */

