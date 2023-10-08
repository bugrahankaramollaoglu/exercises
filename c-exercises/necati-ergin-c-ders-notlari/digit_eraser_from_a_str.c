// bir stringdeki tüm rakamları sil

#include <stdio.h>

char eraser(char *str)
{
    int k = 1;
    while (str[k] != '\0')
    {
        if (!(str[k] >= '0' && str[k] <= '9'))
            printf("%c", str[k]);
        k++;
    }
}
int main()
{
    char a[30] = "bu55gra03asd34232s";
    printf("%s", eraser(a));
}