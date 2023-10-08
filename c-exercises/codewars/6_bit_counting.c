/* Write a function that takes an integer
as input, and returns the number of bits
that are equal to one in the binary
representation of that number. You
can guarantee that input is non-negative.
Example: The binary representation of 1234
is 10011010010, so the function should return 5 in this case
*/

/* 10luk sayı sisteminde 2lik sayı sistemine çeviri yapma
sayı sürekli olarak 2ye bölünür. her bölümden kalan değer (0 ya da 1) oluşturulacak sayıyı oluşturur. bu işlem sayı sıfırlanana kadar sürer. mesela 87 sayısını 2lik sisteme çevirelim.
87 / 2 = 43 (kalan 1) Sayının 0. biti 1
43 / 2 = 21 (kalan 1) Sayının 1. biti 1
21 / 2 = 10 (kalan 1) Sayının 2. biti 1
10 / 2 = 5 (kalan 0) Sayının 3. biti 0
5 / 2 = 2 (kalan 1) Sayının 4. biti 1
2 / 2 = 1 (kalan 0) Sayının 5. biti 0
1 / 2 = 0 (kalan 1) Sayının 6. biti 1
87 = 0101 0111
 */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

// my algorithm
size_t countBits(int value)
{
    int a = 0;
    int *arr;
    int i = 0;
    int sayac = 0;
    int bit_counter = 0;
    arr = malloc(sizeof(int) * 23434);
    while (value)
    {
        arr[a] = value % 2;
        value = value / 2;
        a++;
        bit_counter++;
    }

    while (bit_counter)
    {
        if (arr[i] == 1)
            sayac++;
        i++;
        bit_counter--;
    }
    return sayac;
}

/* better
size_t countBits(unsigned value)
{
    size_t bit;

    bit = 0;
    while(value)
    {
      if (value % 2 != 0)
        bit++;
      value /= 2;
    }
    return (bit);
} */

int main()
{
    printf("%zu", countBits(1234));
}