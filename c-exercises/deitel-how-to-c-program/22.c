#include <stdio.h>

/* struct tanımladıgında hafızada hiçbir yer ayrılmaz, bu struct yapısını
kullanarak yeni objeler tanımladıgında yer ayrılır. */

struct card
{
	int num;
	char type[20];
};

/* şu 2si aynı şeydir: */
struct card card1, card2;

struct card
{
	int num;
	char type[20];
} card1, card2; // yani direkt structta da yaratabilirsin struct örneklerini
