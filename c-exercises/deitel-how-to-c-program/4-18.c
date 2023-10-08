#include <stdio.h>

int main() {
	printf("enter a num: ");
	int num;
	scanf("%d", &num);
	while (num--)
		printf("*");
}