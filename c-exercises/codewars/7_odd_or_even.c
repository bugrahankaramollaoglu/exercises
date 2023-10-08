/* Given a list of integers, determine whether the sum of its elements is odd or even.
Give your answer as a string matching "odd" or "even".
If the input array is empty consider it as: [0] (array with a zero). */

#include <stddef.h>
#include <stdio.h>

const char *odd_or_even(const int *v, size_t sz)
{
    int i = 0;
    int sum = 0;
    if (!v)
        return NULL;
    while (sz)
    {
        sum += v[i];
        sz--;
        i++;
    }
    if (sum % 2 == 0)
        return "even";
    return "odd";
}

/* ternary
const char *odd_or_even(const int *v, size_t sz) {
    size_t sum = 0;
    for(size_t i=0; i<sz; i++) {
        sum += v[i];
    }
    return sum % 2 ? "odd" : "even";
} */

/* short
const char *odd_or_even(const int *v, size_t sz) {
  long sum = 0;
  while (sz--) sum += *v++;
  return sum & 1 ? "odd" : "even";
} */



int main()
{
    int x[3] = {1023, 1, 2};
    printf("%s", odd_or_even(x, 3));
}