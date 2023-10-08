#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
    int a[SIZE];
    int i;

    // sürekli farklı random sayılar verilmesini sağlar
    srand(time(0));
    for (i = 0; i < SIZE; i++)
    {
        a[i] = rand() % 100;
        printf("a[%d] is: [%d]\n", i, a[i]);
    }
    return 0;
}