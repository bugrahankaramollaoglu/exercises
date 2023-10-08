// bir arrayde sadece 1 defa geçen elemanları yazdıran program

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6

int main()
{
    int a[SIZE] = {10,10,2,25,25,3};
    int k, i;
    int counter = 0;

    
    for (k=0; k<6;k++){
        printf("[%d]",a[k]);
    }
    printf("\n*********************\n");
    printf("uniques among them are:");
    for (i = 0; i < SIZE; ++i)
    {
        counter = 0;
        for (k = 0; k < SIZE; ++k)
            if (a[k] == a[i])
                if (++counter == 2)
                    break;
        if (counter == 1)
            printf("[%d]", a[i]);
    }
    printf("\n");
    return 0;
}