
// 54321'i  5	4	3	2	1 olarak yazdırma

/* algo:
1) printf ile sayi iste
2) int sayi; tanımla
3) scanf() ile sayiyi al
4) 53214 sayisini 5	3 2 1 4 olarak yazdırmak icin
   /10%10 tekniginini kullanıyoruz. bu teknik sayıyı
   basamak basamak yazdırıyodu. her yazdırısından sonra
   \t eklersek basamak aralarına boşluk atar.
   bunun için putnbr() yazıyoruz ayrı fonksiyonda
   /10'dan sonra \t yazdırıyoruz.	
5) sonra main()'de bunu çağırıyoruz
*/

#include <stdio.h>

int myFun(int nb)
{
	if (nb >= 10)
	{
		myFun(nb / 10);
		printf("\t");
		myFun(nb % 10);
	}
	else
	{
		putchar(nb + 48);
	}
	return (nb);
}

int main() {
    printf("please enter a 5-digit number:");
    int nb;
    scanf("%d", &nb);
	myFun(nb);
}