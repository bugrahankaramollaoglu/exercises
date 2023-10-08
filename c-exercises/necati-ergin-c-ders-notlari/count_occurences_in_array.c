#include "stdio.h"

// int count_occurences_in_array(int array[], int length)
// {
//     int 
// }

int main() 
{
    
    int myArray[] = {1, 2, 2, 3, 3, 3, 4, 4};

    int counter;
    int num_to_find = 1;

    for (int i = 0; i < 8; i++)
    {
        if (myArray[i] == num_to_find) counter++;
    }
    printf("%d", counter);
}