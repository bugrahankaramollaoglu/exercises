#include <stdio.h>

struct card
{
	int num;
	char *type;
};

int main()
{
	struct card card1;
	card1.num = 8;
	card1.type = "Diamonds";

	/* statik yarattığın bir struct elemanını pointerlı olana atabilirsin */
	struct card *card2 = &card1;
	printf("%s\n", card2->type); // Diamonds
}
