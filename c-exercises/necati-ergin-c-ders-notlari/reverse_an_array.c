// ever thought how to reverse an array's order?

#include <stdio.h>
#define size 3

int main()
{
    int ar[size] = {10, 5, 7};
    int i;
    int size2 = size;
    // 2'ye bölüyoruz çünkü dizinin uzunlugunun
    // yarısı kadar swap islemi yapılsa yetiyor
    for (i = 0; i < size / 2; i++)
    {
        int tmp = ar[i];
        ar[i] = ar[size2 - 1];
        ar[size2 - 1] = tmp;
        size2--;
    }

    for (int x = 0; x < size; x++)
    {
        printf("[%d]", ar[x]);
    }
}
