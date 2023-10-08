// bir arrayin en küçük elemanını bulan program.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#define SIZE 10

int random_array()
{
    int a[SIZE];
    int smallest;
    int i;

    // sürekli farklı random sayılar verilmesini sağlar
    srand(time(0));
    for (i = 0; i < SIZE; i++)
    {
        a[i] = rand() % 100;
        printf("a[%d] is: [%d]\n", i, a[i]);
    }

    smallest = a[0];
    for (int k = 1; k < SIZE; k++)
        if (smallest > a[k])
            smallest = a[k];

    printf("smallest among them is: [%d]", smallest);
    return 0;
}

int main()
{
    random_array();
}