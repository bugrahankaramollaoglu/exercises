#include <stdio.h>
#define size 6

int main()
{
    int arr[size] = {3, 2, 16, 20, 42, 5};
    int aranan_deger;

    printf("aranacak degeri girin:");
    scanf("%d", &aranan_deger);
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == aranan_deger)
            break;
    }
    // eğer size'a yani son elemana gelemeden break ile çıkmışsa
    // aradıgını bulmuş demektir, o zaman da yazdırıyoruz
    if (i < size)
        printf("arr[%d] = %d\n", i, arr[i]);
    // eger size'a ulaşmışsa son elemanda da bulamamıs demektir
    else
        printf("aranan deger burada yok.\n");
    return 0;
}

/* fakat bu yöntem verimsizdir. eğer liste sıralıysa binary search cok daha mantıklıdır */
