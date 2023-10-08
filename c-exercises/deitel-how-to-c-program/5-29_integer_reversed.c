/*
Write a function that takes an integer value and returns the number with its digits reversed. For example, given the number
7631, the function should return 1367
 */

#include <stdio.h>

int numReverser(int nb)
{
    // that'll hold the reversed number
    int reversedNum = 0;

    // that'll hold the current divisor
    int divisor = 1000;

    // that'll hold the current multiplier
    int multiplier = 1;

    // eğer 10+ ise buna giriyor
    while (nb > 9)
    {
        // eğer sayı 2 ya da 3 basamaklıysa sorun yok.
        // ama 4+ digitli ise buna girmek zorunda
        if (nb >= divisor)
        {
            reversedNum += nb / divisor * multiplier;
            nb %= divisor;
            divisor /= 10;
            multiplier *= 10;
        }
        // 2,3 basamakta sorun yok çünkü
        else
        {
            divisor /= 10;
        }
    }

    // eğer sayı tek haneliyse while'a değil buna girer.
    // o zaman da direkt olarak kendisi (3se 3 8se 8)
    // döneceği için reversedNum'a (0) sayı*1 (yani kendisi)'ni
    // atarak döndürüyoruz
    reversedNum += nb * multiplier;
    return reversedNum;
}

int main()
{
    int num;

    printf("please enter a num:");
    scanf("%d", &num);

    printf("your num reversed is:%d\n", numReverser(num));
    return 0;
}