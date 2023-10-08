#include <stdio.h>

/* bir struct tanımladıgında o structın kendisi
eleman olarak bulunamaz, ama pointer-to-struct bulunabilir */

struct Person
{
	char firstName[20];
	char lastName[20];
	int age;
	float salary;
	// struct Person ben; // hatalı
	struct Person *ben2; // hatalı değil
};

/* içerisinde kendisine pointer tutan structlara
self-referential structure denir.  */

