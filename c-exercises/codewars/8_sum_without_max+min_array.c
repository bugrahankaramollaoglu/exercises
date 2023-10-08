/* Sum all the numbers of a given array
except the highest and the lowest element (by value)
The highest or lowest element respectively is
a single element at each edge,
even if there are more than one with the same value.
If an empty value ( null, None, Nothing etc. )
is given instead of an array, or the given array
is an empty list or a list with only 1 element, return 0.*/

#include <stdio.h>

int sum(int *numbers, int numbersCount)
{
    int k, i, temp;

    // could've said    if (numbersCount < 2) return 0;
    if (numbers == NULL || numbersCount == 1)
        return 0;

    for (i = 0; i < numbersCount - 1; ++i)
    {
        for (k = 0; k < numbersCount - 1; ++k)
        {
            if (numbers[k] > numbers[k + 1])
            {
                temp = numbers[k];
                numbers[k] = numbers[k + 1];
                numbers[k + 1] = temp;
            }
        }
    }

    int sum_of_two = numbers[0] + numbers[numbersCount - 1];
    int sum = 0;
    for (int ğ = 0; ğ < numbersCount; ++ğ)
    {
        sum += numbers[ğ];
    }
    return (sum - sum_of_two);
}

/* harika bir cözüm

int sum(int *numbers, int numbersCount)
{
    int max = numbers[0], min = numbers[0], sum = numbers[0];
    if (numbersCount < 2)
        return 0;
    for (int i = 1; i < numbersCount; i++)
    {
        sum += numbers[i];
        if (max < numbers[i])
            max = numbers[i];
        if (min > numbers[i])
            min = numbers[i];
    }

    return sum - min - max;
} */