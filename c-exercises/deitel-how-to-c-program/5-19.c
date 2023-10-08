/*
(Rectangle of Asterisks) Write a function that displays a solid rectangle of asterisks whose
sides are specified in the integer parameters side1 and side2. For example, if the sides are 4 and 5,
the function displays the following

*****
*****
*****
*****

*/

#include <stdio.h>

int main()
{
    int side1 = 0;
    int side2 = 0;

    printf("please enter side1:");
    scanf("%d", &side1);

    printf("please enter side2:");
    scanf("%d", &side2);

    // daha sonra her satırda tekrar kullanabilmek icin
    // bir satırdaki * sayısını tutacak 3. bir int tanımladık
    // bunu loop'ta her satır bitiminde tekrar side1'e atacağız
    int x = side1;

    while (side2)
    {
        // ilk olarak 1. satırda side1 kadar * yazdı
        while (side1)
        {
            printf("*");
            side1--;
        }
        // daha sonra bir alta geçti
        printf("\n");

        // side1'i tekrar x kadar aldık (sıfırlamıştık)
        side1 = x;

        // side2'yi bir azalttık sonra tekrar satır yazdırma
        // loop'una giriyor
        // bu satır sayısı kadar (side2) devam ediyor
        side2--;
    }
    return 0;
}