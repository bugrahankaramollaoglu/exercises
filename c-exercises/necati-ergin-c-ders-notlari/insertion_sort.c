// araya sokma metoduyla küçükten büyüğe sıralama algoritmalarından birisi

#include <stdio.h>
#define SIZE 5

int main()
{
    int a[SIZE] = {10, 5, 4, 2, 20};
    int i, k, temp;

    for (i = 1; i < SIZE; i++)
    {
        temp = a[i];
        // sıralamayı büyükten kücüge yapmak icin a[k-1] < temp demelisin
        for (k = i; k > 0 && a[k - 1] > temp; --k)
            a[k] = a[k - 1];
        a[k] = temp;
    }

    for (i = 0; i < SIZE; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}