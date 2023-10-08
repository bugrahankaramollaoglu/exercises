#include <stdio.h>

struct card
{
	int num;
	char *type;
};

int main()
{
	/* 	how to initialize structs
		eğer eleman sayısından az sayıda ilklendirme yaparsan
		kalan elemanlar automatically 0a eşitlenir (pointersa NULL'a) */
	struct card card1 = {10, "Spades"};
	struct card card2 = {7, "Clubs"};

	printf("%d\n", card1.num);	 // 10
	printf("%s\n", card2.type);	 // clubs
}
