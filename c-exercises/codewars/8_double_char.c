// Given a string, you have to return a string in which
// each character (case-sensitive) is repeated once.  "String"      -> "SSttrriinngg"

#include <stdio.h>

/* benim çözümüm
char *double_char (const char *string, char *doubled)
{
  int a = 0, b = 0;
  while (string[a]) {
    doubled[b] = string[a];
    b++;
    doubled[b] = string[a];
    a++;
    b++;
  }
  doubled[b] = '\0';
  return doubled;
} */

/* simpler version of my algo
char *double_char (const char *string, char *doubled) {
  int k=0,i=0;
  while (string[i]!='\0'){
    doubled[k++]=string[i];
    doubled[k++]=string[i++];
  }
  doubled[k]='\0';
  return doubled;
} */

/* with pointers
char *double_char (const char *string, char *doubled)
{
  char* s=string, *d=doubled;
  while(*s){
    *d++=*s;
    *d++=*s++;
  }
  *d='\0';
  return doubled; // return it
} */
