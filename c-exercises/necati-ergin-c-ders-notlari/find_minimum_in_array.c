#include "stdio.h"

int main()
{
    int counter;

    int array[] = {10, 20, 40, 30, 40, 40, 50};

    for (int i = 0; i < 7; i++)
    {
        if (array[i] == 40) 
            counter++;
    }
    printf("%d", counter);
}