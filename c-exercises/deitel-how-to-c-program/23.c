#include <stdio.h>

/* structs cannot be compared bc members of structs
do not necessarily have to be stored in consecutive bytes of memory.
*/

struct example
{
	char c;
	int i;
} ex1, ex2;

int main()
{
	if (ex1 == ex2) // hata
	{
		printf("True\n");
	}
	else
		printf("False\n");
	return 0;
}
