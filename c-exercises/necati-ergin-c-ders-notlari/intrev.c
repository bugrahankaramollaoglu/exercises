/* sayiyi tersine ceviren program */

#include <stdio.h>

int num_reverter(int nb)
{
    int bn = 0;
    while (nb)
    {
        bn = bn * 10 + nb % 10;
        nb /= 10;
    }
    return bn;
}

int main()
{
    int num;
    printf("enter a num: ");
    scanf("%d", &num);
    printf("%d", num_reverter(num));
}
