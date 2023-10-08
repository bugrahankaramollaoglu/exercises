
// calculates the total of all multiples of 7 between 1-100

#include <stdio.h>

int main() {
	int x = 1;
	int total=0;
	
	while (x < 100)
	{
		if (x % 7 == 0)
			total += x;
		x++;
	}
	printf("%d", total);
}