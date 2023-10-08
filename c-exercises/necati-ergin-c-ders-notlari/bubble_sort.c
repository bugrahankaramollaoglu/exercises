#include <stdio.h>
#define SIZE 5

int main()
{
    int a[SIZE] = {3, 2, 10, -30, 500000};
    int k, i, temp;

    for (i = 0; i < SIZE - 1; ++i)
        for (k = 0; k < SIZE - 1; ++k)
            if (a[k] > a[k + 1])
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
    for (k = 0; k < SIZE; ++k)
    {
        printf("[%d]", a[k]);
    }
    return 0;
}

/*

// do-while'lı hali

#include <stdio.h>
#define SIZE 5
#define UNSORTED 0
#define SORTED 1

int main()
{
    int a[SIZE] = {20, 15, 10, 5, 12};
    int k, i, temp, flag;
    do
    {
        flag = SORTED;
        for (k = 0; k < SIZE; ++k)
        {
            if (a[k] > a[k + 1])
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
                flag = UNSORTED;
            }
        }

    } while (flag == UNSORTED);

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
} */
