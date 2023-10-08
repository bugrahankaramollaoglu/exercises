// Given a month as an integer from 1 to 12, return to which quarter of the year it belongs as an integer number.

#include <stdio.h>

/* smart way in just 3 lines of code
#include<math.h>
int quarter_of(int month) {
  return ceil(month/3.0);
} */

/* int quarter_of(int month)
{
    return (month-1) / 3 + 1;
} */

/* int quarter_of(int month) {
  return 1 * (month > 0 && month <= 3) +
         2 * (month > 3 && month <= 6) +
         3 * (month > 6 && month <= 9) +
         4 * (month > 9 && month <= 12);
} */

