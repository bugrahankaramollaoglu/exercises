/* You are given an odd-length array of integers, in which all
of them are the same, except for one single number.
Complete the method which accepts such an array,
and returns that single different number.
The input array will always be valid! (odd-length >= 3)
Examples

[1, 1, 2] ==> 2
[17, 17, 3, 17, 17, 17, 17] ==> 3

 */

#include <stddef.h>
#include <stdio.h>

/* 101 testi geçip 1testten kalan kodum
int stray(size_t n, int arr[n])
{
    int diff = 509;
    int same = 509;
    int counter = 0;
    int n2 = n;
    // a b a a a
    // b a a a a
    while (n2)
    {
        if (arr[counter] == arr[counter + 1])
        {
            same = arr[counter];
            break;
        }
        counter++;
        n2--;
    }
    n2 = n;
    counter = 0;
    while (n2)
    {
        if (arr[counter] != same)
            return arr[counter];
        counter++;
        n2--;
    }
} */

/* solution1
int stray(size_t n, int arr[n]) {
  int i, num1;
  num1 = arr[0];
  if(num1 != arr[1] && num1 != arr[2]) return num1;
  for(i=1; i<n; i++) {
    if(num1 != arr[i]) {
      return arr[i];
    }
  }
} */

/* bitwise xor
int stray(size_t n, int arr[n]) {
  int res = 0;
  for (size_t i = 0; i < n; i++)
    res ^= arr[i];
  return res;
} */

/* solution best
int stray(size_t n, int arr[n])
{
  for (int i = 0; (unsigned)i <= n; i++)
  {
   if (arr[0] != arr[1] && arr[0] != arr[2])
     return arr[0];

   if (arr[i] != arr[i + 1])
     return arr[i + 1];
  }
} */
