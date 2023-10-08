/* binary olarak verilen sayının decimal karsılıgını bulur */

#include <stdio.h>
#include <math.h>

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

int main() {
    int num;
    int i = 1;
    int b = 0;
	int p = 0;
	int c = 0;
	int array[10];
	int dig;

	printf("enter a binary num (5digits max): ");
    scanf("%d", &num);

	dig = digit(num);

	while (num) 
    {
        array[b] = num % 10;  
		b++;
		num /= 10;
	}

	int result = 0;

	while (dig--)
	{
		result += array[p] * pow(2, c);
		p++;
		c++;
	}
	printf("%d", result);
	return 0;
}
