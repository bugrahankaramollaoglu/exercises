#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {6, 7, 8, 9, 10};
    int c[SIZE * 2];
    int k;
    int index1 = 0, index2 = 0;
    for (k = 0; k < SIZE * 2; ++k)
    {
        if (index1 == SIZE)
            c[k] = b[index2++];
        else if (index2 == SIZE)
            c[k] = arr[index1++];
        else
        {
            if (arr[index1] < b[index2])
                c[k] = arr[index1++];
            else
            {
                c[k] = b[index2++];
            }
        }
    }
    for (k = 0; k < SIZE * 2; k++)
    {
        printf("[%d]", c[k]);
    }
}