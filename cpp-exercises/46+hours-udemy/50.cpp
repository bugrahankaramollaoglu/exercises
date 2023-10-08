#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* int main(void)
{
	string s1;
	cin >> s1;
	cout << s1 << endl; // c'deki scanf gibi c++'taki cin de boşluğa kadar okur
} */

// tüm input satırını okusun istiyosan getline() kullan
int main()
{
	string s1;
	getline(cin, s1);
	cout << s1 << endl;
}
