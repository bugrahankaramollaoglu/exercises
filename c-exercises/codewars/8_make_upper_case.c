/* a function that returns all a-z to A-Zs */

/* my algo
char *makeUpperCase (char *string) {
  int i = 0;
  while (string[i]) {
    if (string[i] >= 97 && string[i] <= 122)
      string[i] -= 32;
    i++;
  }
  return string;
} */

/* toupper()'lı hali 
#include <string.h>

char *makeUpperCase (char *string) {

  for (int i=0; i< strlen(string); i++){
    string[i] = toupper(string[i]);
  }

  return string;

} */

/* pointerlı hali
char *makeUpperCase (char *str) {
    char *beg = str;
    while ((*beg = toupper(*beg))) {beg++;}
    return str;
} */


