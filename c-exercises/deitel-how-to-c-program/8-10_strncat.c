#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dst, char *src, int n)
{
    int i = 0;
    int len = strlen(dst);
    while (i < n)
    {
        dst[len] = src[i];
        len++;
        i++;
    }
    dst[len] = '\0';
    return dst;
}

int main()
{
    char s1[20] = "bugra";
    char s2[20] = "karamolla";
    printf("before concetenation\n");
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("--------------------\n");
    ft_strncat(s1, s2, 5);
    printf("after concatenation\n");
    printf("s1 is now: %s\n", s1);
    printf("and length of it: %ld", strlen(s1));
}
