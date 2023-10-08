
/*
(Even or Odd) Write a program that inputs a series
of integers and passes them one at a time to function isEven,
which uses the remainder operator to determine whether an
integer is even. The function should take an integer
argument and return 1 if the integer is even and 0 otherwise.
 */

#include <stdio.h>

int isEven(int nb) {
	if (nb % 2 == 0)
		return 1;
	return 0;
}

int main() {
	int num = 0;

	while (num != -1)
	{
		printf("enter a num to see odd or even, -1 to quit:");
		scanf("%d", &num);
		if (num == -1) return 0;
		if (num <= 0)
			printf("please enter above 0");
		if (isEven(num) == 1)
			printf("this is even.\n");
		else if (isEven(num) == 0)
			printf("this is odd.\n");
	}
	return 0;
}
