#include <iostream>
using namespace std;

/* bu işaret c++20 ile gelmiştir: <=>
	soldaki < sağdaki ise - döndürür
	soldaki == sağdaki ise 0 döndürür
	soldaki > sağdaki ise + döndürür
 */

int main() {
	int a = 10;
	int b = 12;
	int res = a <=> b;
	cout << res << endl;
}
