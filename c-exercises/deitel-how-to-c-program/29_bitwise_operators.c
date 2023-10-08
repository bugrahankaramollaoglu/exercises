#include <stdio.h>

/* bitwise operators

	& --> sadece 1-1'de 1 verir
	|| --> herhangi biri 1 ise 1 verir
	^ --> bitler farklıysa 1 verir (exclusiveor)
	<< --> sola bit kaydırır
	>> --> sağa bit kaydırır
	~ --> 0'lar 1, 1'ler 0 olur (complement)

*/

int main()
{
	printf("%d\n", 3 & 10);	 // 0011 & 1010 = 0010 verir o da 2ye eşit
	printf("%d\n", 3 ^ 10);	 // 0011 ^ 1010 = 1001 verir o da 9a eşit
	printf("%d\n", 3 | 10);	 // 0011 | 1010 = 1011 verir o da 11e eşit
	printf("%d\n", 10 << 2); // 0000 1010'u 2 bit sola kaydırır 0010 1000 olur (40)
	printf("%d\n", 10 >> 2); // 0000 1010'u 2 bit sağa kaydırır 0000 0010 olur (2)
}

/* bir n sayisini k bit sola kaydırmanın formülü:  n * 2^k
bir n sayisini k bit sağa kaydırmanın formülü:  int(n / 2^k) */

/* The result of right or left shifting a value is undefined if the right operand is negative or
if the right operand is larger than the number of bits in which the left operand is stored.
 */
