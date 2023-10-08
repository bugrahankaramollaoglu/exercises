/// aabbbcdceeefe ---> abcdcefe (ardısık aynı karakterleri 1 tane bırakıncaya
/// kadar siler)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100

int main()
{
    printf("enter a str:");
    char str[size];
    scanf("%s", str);

    int i = 0;
    int k;

    for (k = 0; str[k]; ++k)
        if (str[k] != str[k + 1])
            str[++i] = str[k + 1];
    printf("%s", str);
    return 0;
}