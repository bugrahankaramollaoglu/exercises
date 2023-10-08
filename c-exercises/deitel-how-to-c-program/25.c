#include <stdlib.h>
#include <stdio.h>

/* (.) ve (->) operatörleri
struct elemanlarına . ya da -> operatörü ile erişilir
eğer structa pointerla erişmediysen structın elemanlarına (.) ile
pointerla eriştiysen (->) ile erişebilirsin. burada önemli olan
structın elemanının değil structın kendisinin pointer olup olmamasıdır.
*/

struct card
{
	int num;
	char *type;
};

int main()
{
	struct card *card1 = malloc(sizeof(struct card)); // pointerla tanımlandıgından -> ile eriştik elemanlarına
	// struct card card1 = {10, "Spades"}; şeklinde tanımlasaydık . ile erişecektik
	card1->type = malloc(100);
	card1->type = "Spades";
	card1->num = 5;
	printf("%s\n", card1->type); // Spades
	printf("%s\n", (*card1).type); // Spades (yukarıdakiyle birebir aynı)
	printf("%d\n", card1->num);	 // 5
}

/* card1->type demek (*card1).type demektir */
