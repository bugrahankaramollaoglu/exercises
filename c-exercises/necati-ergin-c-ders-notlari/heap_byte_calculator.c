// heap alanının boyutunu ölcen fonksiyon
#include <stdio.h>
#include <stdlib.h>
int main()
{
    long total = 0L;
    void *p;
    for (;;)
    {
        p = malloc(1);
        if (!p)
            break;
        total += 1;
    }
    printf("toplam heap alanı= %ld byte.", total);
    system("pause");

    return 0;
}