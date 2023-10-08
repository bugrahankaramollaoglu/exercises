#include <stdio.h>

/* bit fields
in c, bit fields are a way to pack data structures
into a smaller amount of memory by using bit-level
addressing. A bit field is a structure member that
holds a certain number of bits, specified by the
programmer, and can be used to represent a single
value or a set of related values. */

/* To declare a bit field in C, the struct
keyword is used along with a special syntax
that specifies the number of bits that the
field should occupy. Here's an example: */

// burada 3 bit field var
// 1 2 ve 3 de her bir bit fieldin kaplayacağı bit sayısı
// flag3 mesela 3 bit tutacak gibi düşünebilirsin
struct Flags {
	unsigned int flag1 : 1;
	unsigned int flag2 : 2;
	unsigned int flag3 : 3;
};

/* ayrıca bir bit alanına maks sizeof(data)si kadar bit
ayirabilirsin. mesela yukarıdaki unsigned dediğimiz için maks 32 verebilirdik. */


/* dikkat etmen gereken şey bit alanları bit 'array'leri değillerdir.
[] ve & gibi array operatörleriyle kullanılamazlar. */
