#include "stdio.h"

int find_max_in_array(int array[], int length)
{
    int max;

    // initially assumed first num is the biggest
    max = array[0];

    // looped tru the whole array
    for (int i = 1; i < length; i++)
    {
 
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int main()
{

    int arrayA[] = {10, 3, 30, 2, -200, -350, 1000};
    int arrayB[] = {52, 10, 25, 50, 210, 211};

    int maxA = find_max_in_array(arrayA, 7);
    int maxB = find_max_in_array(arrayB, 6);

    printf("max of arrayA is: %d\n", maxA);
    printf("max of arrayB is: %d\n", maxB);

    return 0;
}