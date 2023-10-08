#include <stdio.h>
#define NUM 30
#undef NUM // define'ı siler

int main()
{
	printf("%d\n", NUM);
}
