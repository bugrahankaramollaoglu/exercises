#include <string.h>
#include <stdio.h>

int main()
{
    char s1[20] = "bugra";
    char s2[20] = "kara";
    printf("before concetenation\n");
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("--------------------\n");
    strcat(s1, s2);
    printf("after concatenation\n");
    printf("s1 is now: %s\n", s1);
    printf("and length of it: %ld", strlen(s1));
}