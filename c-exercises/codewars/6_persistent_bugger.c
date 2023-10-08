/* Write a function, persistence, that takes in
a positive parameter num and returns
its multiplicative persistence, which
is the number of times you must
multiply the digits in num until you reach a single digit.

For example (Input --> Output):

39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit)
999 --> 4 (because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and finally 1*2 = 2)
4 --> 0 (because 4 is already a one-digit number)

*/

/* benim algom
int digit(int num)
{
    int i;

    i = 0;
    if (num == 0)
        return (1);
    while (num)
    {
        num /= 10;
        i++;
    }
    return i;
}

int carpan(int nb, int sum)
{
    while (nb)
    {
        sum *= nb % 10;
        nb /= 10;
    }
    return sum;
}

int persistence(int n)
{
    int sayinin_dig = digit(n);
    int counter = 0;
    int sum = 1;
    if (n == 0)
        return 0;
    while (sayinin_dig > 1)
    {
        n = carpan(n, sum);
        sayinin_dig = digit(n);
        counter++;
    }

    return counter;
}
 */

/* cok cok daha basiti
int persistence(int n)
{
    int m, p = 0;
    while (n > 9) {
        ++p;
        m = n % 10;
        while (n /= 10)
            m *= n % 10;
        n = m;
    }
    return p;
}
 */

/* cok daha basiti
int persistence(int n) {
  for (int m, i = 0;; n = m, ++i) {
    if (n < 10) return i;
    for (m = n % 10; n > 9; n /= 10, m *= n % 10);
  }
} */

/* recursive hali
int persistence(int n) {

  int sum = 1;

  if (n < 10) {
    return 0;
  }

  while (n > 0) {
    sum *= (n % 10);
    n /= 10;
  }

  return 1 + persistence(sum);
} */

#include <stdio.h>
int main()
{
    printf("%d", persistence(9999));
}