/* 
(Displaying a Rectangle of Any Character) Modify the function created in Exercise 5.19 to
form the rectangle out of whatever character is contained in character parameter fillCharacter.
 */

#include <stdio.h>

void rectangle(int side1, int side2, char fillChar) {

    // daha sonra her satırda tekrar kullanabilmek icin
    // bir satırdaki * sayısını tutacak 3. bir int tanımladık
    // bunu loop'ta her satır bitiminde tekrar side1'e atacağız
    int x = side1;

    while (side2)
    {
        // ilk olarak 1. satırda side1 kadar * yazdı
        while (side1)
        {
            printf("%c", fillChar);
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
}


int main()
{
    rectangle(3, 4, '+');
    return 0;
}