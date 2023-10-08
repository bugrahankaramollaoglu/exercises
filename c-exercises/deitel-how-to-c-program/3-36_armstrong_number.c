/* 
Armstrong numbers are numbers that are equal to the sum of their digits
raised to power of the number of digits in them. The number 153,for example, equals to 
1 ** 3 + 5 ** 3 + 3 ** 3. Thus it is an Armstrong number.
Write a program to display all three-digit Armstrong numbers.
*/

#include <stdio.h>
#include <math.h>
 
int asd(int num) {
	int a = 0;
	int array = num;
	int flag = 0;
	int result = 0;
	while (a < 3)
	{
		result += pow((num % 10), 3);
		a++;
		num /= 10;
	}
	if (array == result)
	{
		return (1);
	}
	return 0;
}

int main() {
	int count = 0;
	int p = 0;
	int c = 0;

	for (int i = 100; i <= 999; i++)
	{
		if (asd(i) == 1)
			printf("%d\n", i);
		continue;
	}
}
