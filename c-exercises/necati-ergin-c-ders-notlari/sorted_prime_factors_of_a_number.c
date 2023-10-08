/* sayının asal çarpanlarını sıralı yazdıran program. */

#include <stdio.h>

void display_factors(int number)
{
    int k = 2;
    printf("(%d) -> ", number);
    while (number != 1)
    {
        while (number % k == 0)
        {
            printf("%d ", k);
            number /= k;
        }
        ++k;
    }
    printf("\n");
}

int main()
{
    display_factors(120);
}