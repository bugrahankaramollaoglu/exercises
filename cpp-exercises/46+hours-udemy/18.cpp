#include <iostream>
using namespace std;

/* aşağıdaki kod farklı yerlerde farklı çalışıyor (undefined)
sebebi ise b'nin sonunu \0 ile bitirmemen */

int main() {
	char a[] {'b','u','g','r','a','\0'};
	char b[] {'b','u','g','r','a'};
	cout << b << endl;
}
