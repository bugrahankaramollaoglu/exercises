#include <iostream>
using namespace std;

/* c'de birden fazla constant değişken (değiştirelemez) türü vardır
	1) literal constant
	2) declared constant
		used with const xxx
	3) constant expression
		used with constexpr xxx
	4) enumerated constants
		used with enum xxx
	5) defined constants
		used with #define xxx
 */

int main()
{
	// literal constants
	int x = 12L; // long
	const char *name = "bugra";
	char letter = 'J';
	name = "cemre"; // hata verirdin eğer const char * const name deseydin
	cout << name << endl;
}

/*
	c'nin aksine c++'da
	char *name = "bugra";
	diyemiyosun. sebebi ise "bugra" ifadesi bir string-literal (sabit string)'dir
	yani ramde read-onlyde saklandıklarından değiştirelemezler o yüzden belirtmelisin.
	const char *name diyosun onun yerine
*/
