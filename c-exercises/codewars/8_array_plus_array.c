/* sum the elements of two different array */

#include <stddef.h>

long arr_plus_arr(const int *a, const int *b, size_t na, size_t nb)
{
    long sum = 0;
    int i = 0, j = 0;
    while (na)
    {
        sum += a[i];
        i++;
        na--;
    }
    while (nb)
    {
        sum += b[j];
        j++;
        nb--;
    }
    return (sum);
}

/* everything is better with pointers

long arr_plus_arr(const int *a,  const int *b, size_t na, size_t nb)
{
    long t = 0;
    while (na--) t += *a++;
    while (nb--) t += *b++;
    return t;
} */