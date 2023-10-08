/* prime num checker
flag kullanarak yazıyosun
önce kullanıcıdan scanf ile bi sayi iste
sonra for döngüsü kullanarak (sayaci 2den baslat)
sayi * sayi'ya kadar i'yi arttir
eğer
 */

#include <stdio.h>
int main()
{
	int num, i, flag = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	// Iterate from 2 to sqrt(n)
	for (i = 2; i <= num * num; i++) {

		// If n is divisible by any number between
		// 2 and n/2, it is not prime
		if (num % i == 0) {
			flag = 0;
			break;
		}
	}

	if (num <= 1)
		flag = 0;

	if (flag == 1) {
		printf("%d is a prime number.", num);
	}
	else {
		printf("%d is not a prime number.", num);
	}

	return 0;
}
