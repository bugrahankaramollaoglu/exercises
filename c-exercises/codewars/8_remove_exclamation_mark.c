// Write resulting string into buffer pointed by str_out

#include <stdio.h>

/* benimki de çalışıyor ama codewars'tan geçmedi
void remove_exclamation_marks(const char *str_in, char *str_out)
{
    int i = 0;
    int a = 0;
    while (str_in[i])
    {
        while (str_in[i] == '!')
        {
            i++;
        }
        str_out[a] = str_in[i];
        a++;
        i++;
    }
    str_out[a] = '\0';

    printf("%s", str_out);
} */

/* do-while ile çözümü
void remove_exclamation_marks(const char *str_in, char *str_out)
{
  do
  {
    if (*str_in != '!') *str_out++ = *str_in;
  }
  while (*str_in++);
} */

/* 2 satırda çözümü
void remove_exclamation_marks(const char *str_in, char *str_out) {
  while (*str_out = *str_in++)
    str_out += *str_out != '!';
} */

/* strncat() ile çözümü
void remove_exclamation_marks(const char *str_in, char *str_out) {
  str_out[0] = '\0';
  for (int i = 0; i <= (int) strlen(str_in); i++) {
    if (str_in[i] == '!') continue;
    strncat(str_out, &str_in[i], 1);
  }
} */

/* pointerla çözümü
void remove_exclamation_marks(const char *str_in, char *str_out)
{
  while(*str_in)
  {
    while (*str_in == '!')
      str_in++;
    *str_out++ = *str_in++;
  }
  *str_out = '\0';
  printf("%s", str_out);
} */

int main()
{
    char s[] = "!!!!!!!!!!!bu!!!gr!ahan!";
    char y[] = "";
    remove_exclamation_marks(s, y);
}