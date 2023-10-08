#include <iostream>
using namespace std;

/* ternary operation in c++ */

/* cond ? exp1 : exp2

eğer cond true ise exp1, değilse exp2 çalıştırılır ve döndürülür.

*/

int main()
{
	int i{20};
	if (i > 10 ? cout << "10dan büyük" : cout << "10dan küçük")
		;

	int res = (i > 20 ? 2 : 3);
	cout << endl
		 << res << endl;

	cout << ((i == 20) ? "i is 20" : "i is not 20") << endl;
}
