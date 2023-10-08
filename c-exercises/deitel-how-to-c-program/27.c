#include <stdlib.h>
#include <stdio.h>

/* structlar fonksiyonlara
	1. struct elemanlarını
	2. tüm bir structı
	3. structı gösteren bir pointerı
parametre olarak verilmesiyle kullanılabilirler */

/* fakat eğer structın eleman(lar)ını ya da
tüm bir structı bir fonksiyona gönderirsen by-value olarak
giderler yani orijinal struct değiştirilmez. sadece
structın pointerını fonksiyona gönderirsen by-reference göndermiş olursun
yani orijinal structı değiştirebilirsin. */

struct Point
{
	int x;
	int y;
};

// 	1. parametre olarak struct elemanlarını gönderelim
void print1(int x, int y)
{
	printf("(%d, %d)\n", x, y);
}

/* int main()
{
	struct Point p = {3, 4};
	print1(p.x, p.y); // (3, 4)
} */

// 	2. parametre olarak tüm bir structı gönderelim
void print2(struct Point p)
{
	printf("(%d, %d)\n", p.x, p.y);
}

/* int main()
{
	struct Point p = {3, 4};
	print2(p); // (3, 4)
} */

// 3. parametre olarak structa pointer gönderelim
void print3(struct Point *p)
{
	printf("(%d, %d)\n", p->x, p->y);
}

void setCoordinates(struct Point *p, int x, int y)
{
	p->x = x;
	p->y = y;
}

/* int main()
{
	struct Point *p = malloc(sizeof(struct Point));
	setCoordinates(p, 3, 4);
	print3(p); // (3, 4)
	free(p);
}
 */
