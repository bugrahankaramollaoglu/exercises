// tüm bir cümleyi tersine çeviren program.

#include <stdio.h>
#define SIZE 100

int main()
{
    char str[SIZE];
    int k, temp, len;

    printf("enter a sentence: ");
    scanf("%s", str);

    for (len = 0; str[len]; ++len)
        ;
    for (k = 0; k < len / 2; ++k)
    {
        temp = str[k];
        str[k] = str[len - 1 - k];
        str[len - 1 - k] = temp;
    }
    printf("reversed sentence is: %s", str);
    return 0;
}