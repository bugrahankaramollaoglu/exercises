// iteratif faktöriyel

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	a;

	factorial = 1;
	a = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (a++ < nb)
		factorial *= a;
	return (factorial);
}

int main() {
	printf("1!\t2!\t3!\t4!\t5!\n");
	for (int i = 1; i <= 5; i++)
	{
		printf("%d", ft_iterative_factorial(i));
		printf("\t");
	}
}