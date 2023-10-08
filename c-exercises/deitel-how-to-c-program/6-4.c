#include <stdio.h>
#define SIZE 3

int main()
{
    int arr[SIZE][SIZE];

    // initialize every element to the sum of indices
    for (int x = 0; x < SIZE; ++x)
    {
        for (int y = 0; y < SIZE; ++y)
        {
            arr[x][y] = x + y;
        }
    }

    // printing out all the elements
    for (int a = 0; a < SIZE; ++a)
    {
        for (int b = 0; b < SIZE; ++b)
        {
            printf("arr[%d][%d] = %d\n", a, b, arr[a][b]);
        }
    }
}