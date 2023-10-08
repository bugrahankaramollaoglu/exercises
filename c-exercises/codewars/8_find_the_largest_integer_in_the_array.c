// returning the max integer in an array

#include <stdio.h>

// my solution
int find_largest_int(int *array, int arrayLength)
{
    // array[0] yerine *array de diyebilirsin
    // çünkü o da array'in ilk indisinin konumuna
    // işaret ediyor
    int max = array[0];
    int i = 0;
    while (arrayLength)
    {
        if (array[i] > max)
            max = array[i];
        i++;
        arrayLength--;
    }
    return max;
}

/* değişken tanımlamadan direkt pointerlarla yapılmışı
int max(const int *arr, int len)
{
    int max = *arr;
    while (--len)
        if (max < *(arr+len))
            max = *(arr+len);
    return max;
} */

/* daha da kısa hâli
int max(int* array, int arrayLength)
{
  int max = *array;
  while (arrayLength--) { int n = *array++; if (n > max) max = n; }
  return max;
} */

/*
int max(int* arr, int len)
{
  int res=*(arr+ --len);
  while(len--)
    if(res < *(arr+len))
      res = *(arr+len);
 return res;
} */
/*
    len is the length of the array. the last element of a (non-empty) array is array[len - 1]
    --len and len-- are the prefix / postfix decrement operators:

    int i = 1, j = 1;
    printf("%d %d\n", --i, j--);
    // 0 1
    printf("%d %d\n", i, j);
    // 0 0

    i-- evaluates i and then decrements it by 1, --i decrements i by 1 and then evaluates it
    *(array + i) is stricly equivalent to array[i] (the last is syntaxic sugar for the former)

this line :

  int res=*(arr+ --len);

could thus be rewritten as:

int res = arr[len - 1];
len -= 1;

so res is set to the last element of the array.

then the code loops through the array from the penultimate element
to the first, using len (counter-intuitively) as a loop index, and
updating res when a smaller/larger array element is found, for min and max respectively

the loop stops when len-- has a falsy boolean value i.e. when
len == 0, using the same trick to evaluate len and decrement
it at the same time in the while() condition

 */

int main()
{
    int a[6] = {3, 1, 4, 220, -7710, 2};
    int x = find_largest_int(a, 6);
    printf("%d", x);
}