// Consider a program that uses a function square
// to calculate and print the squares of the integers from 1 to 10.

#include <stdio.h>

int square(int num);

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		printf("%d ", square(i));
	}
}

int square(int num)
{
	return (num * num);
}
