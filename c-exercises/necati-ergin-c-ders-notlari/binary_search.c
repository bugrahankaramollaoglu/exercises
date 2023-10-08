// sıralı listelerde arama yaparken kullanılır

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

/* Yukarıdaki main işlevinde sıralı bir dizinin içinde arama yapmak amacıyla binary search
isimli algoritma kullanılıyor. Dizi sıralanmış olduğuna göre, dizinin ortadaki elemanına
bakılmasıyla, dizideki elemanların yarısı artık sorgulama dışı bırakılır, değil mi?
low değişkeni arama yapılacak dizi parçasının en düşük indisini, high değişkeni ise en
büyük indisini tutuyor. Daha sonra low değeri, high değerinden küçük ya da eşit olduğu
sürece dönen bir while döngüsü oluşturulduğunu görüyorsunuz. mid değişkeni arama
yapılacak dizi parçasının ortadaki elemanının indisini tutuyor. Dizinin mid indisli
elemanının aranan değer olup olmadığına bakılıyor. Aranan değer bulunamamışsa iki
olasılık vardır: mid indisli dizi elemanı aranan değerden büyük ise high değişkeninin
değeri mid - 1 yapılıyor. Böylece arama yapılacak dizi boyutu yarıya düşürülüyor. mid
indisli dizi elemanı aranan değerden küçük ise low değişkeninin değeri mid + 1 yapılıyor.
Böylece yine arama yapılacak dizi boyutu yarıya düşürülüyor.
while döngüsü çıkışında eğer low değeri high değerinden büyükse aranan değer
bulunamamış demektir. Aksi halde dizinin mid indisli elemanı aranan değerdir. */

int main()
{
    int a[SIZE];
    int k, mid, aranan_deger;
    int val = 1;
    int low = 0;
    int high = 1;

    srand(time(0));
    for (k = 0; k < SIZE; k++)
    {
        a[k] = val;
        val += rand() % 10;
        printf("%d ", a[k]);
    }

    printf("aranacak degeri girin:");
    scanf("%d", &aranan_deger);

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == aranan_deger)
            break;
        if (a[mid] > aranan_deger)
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (low > high)
        printf("%d degeri bulunamadi.\n", aranan_deger);
    else
        printf("a[%d] = %d\n", mid, aranan_deger);

    return 0;
}