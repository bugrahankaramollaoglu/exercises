#include <stdio.h>

int main()
{
    // a)
    int n[3] = {4, 5, 6};
    for (int i = 0; i < 3; i++)
    {
        printf("[%d]\n", n[i] * 4);
    }

    // b)
    int n2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += n2[i];
    }
    printf("%d\n", sum);

    // c) Initialize each of the 9 elements 
    // of a two-dimensional integer array 
    // m[3][3] to 3, using loops

    

}