/* Bölenlerinin toplamına eşit olan tamsayılara, mükemmel tamsayı (perfect integer) denir.
10000'den küçük mükemmel sayilari bul.*/

#include <stdio.h>
#include <stdlib.h>

int perfect_checker(int nb)
{
    int sum = 0;
    for (int i = 1; i < nb; i++)
    {
        if (nb % i == 0)
            sum += i;
    }
    if (nb == sum)
        return 1;
    return 0;
}

int main()
{
    int sum = 0;
    int *p;
    p = malloc(sizeof(int) * 500);
    int j = 0;
    int counter = 0;
    for (int k = 1; k < 10000; k++)
    {
        if (perfect_checker(k) == 1)
        {
            p[j] = k;
            j++;
            counter++;
        }
    }

    for (int x = 0; x < counter; x++)
    {
        printf("%d ", p[x]);
    }
}