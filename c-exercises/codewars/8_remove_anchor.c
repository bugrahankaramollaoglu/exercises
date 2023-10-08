/*
döndürülecek bir stringde # görürse
sadece #'a kadar olan kısmı döndürsün

"www.codewars.com#about" --> "www.codewars.com"
"www.codewars.com?page=1" -->"www.codewars.com?page=1"

 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* bu benimki cogu testi geciyor, eksiği nerde göremedim
P.S sadece sonuna null koymayı unutmuşum....

char *remove_url_anchor(const char *url_in)
{
    char *result = malloc(strlen(url_in) + 1);
    int a = 0;
    int i = 0;
    while (url_in[i] && url_in[i] != '#')
    {
        result[a] = url_in[i];
        i++;
        a++;
    }
    result[a] = '\0';
    return result;
}  */

/* solution1
char *remove_url_anchor(const char *url_in) {
    char* result = malloc(strlen(url_in) + 1);
    strcpy(result, url_in);
    char* anchor = strchr(result, '#');
    if(anchor)
        *anchor = '\0';
    return result;
} */

/* solution2
char *remove_url_anchor(const char *url_in) {
   return strtok(strdup(url_in), "#");
} */

/* solution3
char *remove_url_anchor(const char *url_in)
{
  char *url_out = strdup(url_in);

  for (char *s = url_out; *s; s++)
    if (*s == '#') {*s = '\0'; break;}
  return url_out;
} */

int main()
{
    char *asd = "bugra###asdasd";
    printf("%s", remove_url_anchor(asd));
}