// You get an array of numbers, return the sum of all of the positives ones.

#include <stddef.h>

/* my algo
int positive_sum(const int *values, size_t count)
{
    int sum = 0;
    while (count--) {
        if (*values > 0)
            sum += *values;
        *values++;
    }
    return sum;
} */

/* shorter version
int positive_sum(const int *val, size_t count) {
  int sum = 0;
  for(int i = 0; i < count; i++)
    if(val[i] > 0) sum += val[i];
  return sum;
} */

/* much shorter version
#include <stddef.h>

int positive_sum(const int *val, size_t len) {
    int res = 0;
    while (len --> 0) res += val[len] > 0 ? val[len] : 0;

    return res;
} */
