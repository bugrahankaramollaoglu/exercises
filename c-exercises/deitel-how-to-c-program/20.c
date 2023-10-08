#include <stdio.h>

// structs

struct card
{
	char *symbol;
	char *num;
	int is_taken;
};

/* struct anahtar kelimesi veri tipini belirtiyor
card burada structın tagi
symbol ve num ve is_taken da card structının memberları
Members of the same structure type must have
unique names, but two different structure types may contain members of the same name
without conflict */

int main()
{
	struct card myCard;
	myCard.symbol = "spades";
	myCard.num = "12";
	myCard.is_taken = 1;
	printf("%s\n", myCard.symbol);
	printf("%s\n", myCard.num);
	printf("%d\n", myCard.is_taken);
}

