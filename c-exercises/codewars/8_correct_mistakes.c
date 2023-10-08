/* Your task is correct the errors in the digitised text. You only have to handle the following mistakes:
    S is misinterpreted as 5
    O is misinterpreted as 0
    I is misinterpreted as 1   */

/* my solution
char *correct(char *string) {
  int i = 0;
  while (string[i] != '\0') {
    if (string[i] == '5')
      string[i] = 'S';
    if (string[i] == '0')
      string[i] = 'O';
    if (string[i] == '1')
      string[i] = 'I';
    i++;
  }
  return (string);
} */

/* switch-case usage 
char *correct(char *string){
  for(int i=0; i<=strlen(string); i++){
    switch(string[i]){
      case '5': string[i] = 'S'; break;
      case '0': string[i] = 'O'; break;
      case '1': string[i] = 'I'; break;
    }
  }
  return string;
} */

#include <stdio.h>
int main() {
  char *s = "510";
  printf("%s", correct(s));
}