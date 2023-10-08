#include <stdio.h>

/* typedef veri tiplerine alias atarken kullanılır.

typedef unsigned long long int uulong;
uulong myNum;
gibi

struct isimleri kısaltma amacıyla genelde typedef ile kullanılır
mesela <typedef struct card Card;> dedikten sonra artık Card kelimesi
struct card yerine geçer. */

typedef struct
{
	int num;
	char *type;
} Card;

/* artık Card kelimesi structı gösterir */
int main()
{
	// struct card yerine Card diyoruz
	Card card1 = {9, "Clubs"};
	printf("%d\n", card1.num);
	printf("%s\n", card1.type);
}
