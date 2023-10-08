// 

#include <stdio.h>

int main(void) {
	for (int i = 2; i <= 100; i++)
	{
		for (int x = 2; x <= i; x++)
		{
			if (i == x)
				printf("%d ", i);
			else if (i % x == 0)
				break;
		}
	}	
}