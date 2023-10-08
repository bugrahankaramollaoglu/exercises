/* Return an array, where the first element is the count
of positives numbers and the second element is sum of
negative numbers. 0 is neither positive nor negative.
If the input is an empty array or is null,
return an empty array. Example:
For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15],
you should return [10, -65]. */

#include <stddef.h>
#include <stdio.h>

void count_positives_sum_negatives(
    int *values, size_t count, int *positivesCount, int *negativesSum)
{
    int i = 0;
    while (count--)
    {
        if (values[i] > 0)
            // ya da *positivesCount += 1;
            // *positivesCount++ diyemezsin çünkü *'ın önceliği
            // aritmetikten öncedir.
            (*positivesCount)++;
        if (values[i] < 0)
            *negativesSum += values[i];
        i++;
    }
}

/* sol2
#include <stddef.h>

void count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum) {
  int cnt = 0; int sm = 0;
  for (size_t i = 0; i < count; i++) {
    if (values[i] > 0) cnt++;
    if (values[i] < 0) sm += values[i];
  }
  *positivesCount = cnt;
  *negativesSum = sm;
} */

/* sol3
#include <stddef.h>

void count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum){
  while(count--){
    values[count]<=0 ? (*negativesSum)+=values[count] : (*positivesCount)++;
  }

} */
