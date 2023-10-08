// verilen sayinin basamaklarını tara, kaç tane 9 var onu döndür

#include <stdio.h>

// klasik basamak sayısı hesaplayan digit() fonksiyonu 
int digit(int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		i++;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

// n'deki 9 olan basamakları hesaplayan fonksiyon
int all_9s(int n)
{
	// sayaçımız
	int x = 0;

	// 9ların sayısını tutacak sayaç
	int num_of_9s = 0;
	
	// basamak sayısını tutuyor
	int dig = digit(n);

	// basamak sayısı bitene kadar
	while (dig > 0)
	{
		// sayının basamaklarını tek tek taramak için %10/10 metodunu kullanıyoruz
		int x = n % 10;

		// 9 olan basamağa denk gelirse 9 sayacını 1 arttırıyoruz
		if (x == 9)
			num_of_9s++;
		
		n /= 10;
		dig--;
	}

	// finalde de 9ların sayısını döndürüyor
	return (num_of_9s);
}

int main() {
	int num;
	int counter;

	printf("enter a num (5- digits): ");
	scanf("%d", &num);

	counter = all_9s(num);
	printf("%d", counter);
}
