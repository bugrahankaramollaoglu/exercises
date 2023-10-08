/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7_descending_order.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bugra <bugra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:05:27 by bugra             #+#    #+#             */
/*   Updated: 2022/11/01 22:05:27 by bugra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Your task is to make a function that can take
any non-negative integer as an argument and
return it with its digits in descending order.
Essentially, rearrange the digits to create
the highest possible number.

Examples:

Input: 42145 Output: 54421

Input: 145263 Output: 654321 */

#include <inttypes.h>
#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int tmp;

    // eğer array boş değilse
    if (size > 0)
    {
        // arrayin eleman sayısı kadar
        while (i < size)
        {
            // eğer ilk eleman (şu an için) bir sonraki elemandan büyükse
            if (tab[i] > tab[i + 1])
            {
                // klasik swap işlemini tmp yardımıyla yapıyoruz, yerleri değişiyor
                tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
                // i'yi -1 yapıyoruz. nedeni indisi listenin başına atmak. -1. indis olayı kafa karıstırmamalı
                // çünkü bir sonraki döngüde if'e değil i++'ya girecek
                i = -1;
            }
            i++;
            // böylece eğer küçükten büyüğe gidiyosa array (like we want) i++'ya giriyor. değilse if'e giriyor
        }
    }
}

int digit(int nb)
{
    int i = 0;
    if (nb == 0)
        return 1;
    while (nb)
    {
        i++;
        nb /= 10;
    }
    return i;
}

uint64_t descendingOrder(uint64_t n)
{
    int dig = digit(n);
    int arr[dig];
    int i = 0;
    int result = 0;
    int tmp;

    if (dig == 1)
        return n;

    while (i < dig)
    {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }

    i = 0;

    sort_int_tab(arr, dig);
    int dig2 = dig;

    for (i = 0, result = 0; i < dig; i++, dig2--)
    {
        result = 10 * result + arr[dig2];
    }

    return result;
}

int main(void)
{
    printf("%ld", descendingOrder(643828));
    return (0);
}