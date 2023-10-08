/* Your task is to find the first element of an array that is not consecutive. */

// For c the function should return false if no non consecutive numbers are found
// It should return true if one is found and the pointer arg first set to the value

#include <stdbool.h>
#include <stdio.h>

bool firstNonConsecutive(const int arr[], const int length, int *first)
{
    int i = 0;
    while (i < length - 1)
    {
        if (arr[i] + 1 != arr[i + 1])
        {
            *first = arr[i + 1];
            return true;
        }
        i++;
    }
    return false;
}

/* kral amq
bool firstNonConsecutive(const int arr[], int length, int *first)
{
  for (int *p = arr, *q = arr + 1; --length; p++, q++)
    if (*q != *p + 1) return *first = *q, true;

  return false;
} */

int main()
{
    int *a;
    int ar[4] = {2, 3, 4, 7};
    printf("%d\n", firstNonConsecutive(ar, 4, a));
    printf("%d", a);
}