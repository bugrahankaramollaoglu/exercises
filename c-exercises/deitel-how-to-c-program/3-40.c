/*
3'ün katlarını yazdır ama bunu sonsuz döngüye sok
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int multiple = 1;

    while (multiple > 0)
    {
        multiple *= 2;
        printf("%d\n", multiple);
    }
    return 0;
}