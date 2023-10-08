
#include <stdio.h>

/* redirecting input in C (<)
./sor < inp.txt
bu ifade input() bekleyen sor isimli
programa inp.txt'in içeriğini input olarak verir */

int main() {
	char name[20];
	scanf("%s", name);
	printf("your name: %s\n", name);
}
