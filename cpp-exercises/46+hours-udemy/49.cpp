#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	string s1{"bugra kara molla oglu"};

	// substr(start_index, length) fonksiyonu bir stringin bütün alt kümelerini çıkarır
	cout << s1.substr(0, 2);  // bu
	cout << s1.substr(5, 2);  // k
	cout << s1.substr(10, 3); // mo

	cout << endl;

	// find(search_str, (aramaya_hangi_indisten_başlasın)) fonksiyonu aradıgı seyin indisini verir (strchr gibi)
	cout << s1.find("gr");	  // 2
	cout << s1.find("mo", 7); // 11

	cout << endl;

	// erase(start_index, length) fonksiyonu bir stringden parça silmeye yarar
	cout << s1.erase(11, 2) << endl; // bugra kara lla oglu

	// length() fonksiyonu stringin uzunlugunu dondurur
	cout << s1.length() << endl; // 19

	// ayrıca c'nin aksine c++'te pythondaki gibi stringleri + ile birleştirebilirsin
	s1 = "bugra";
	s1 += " kara";
	cout << s1 << endl; // bugra kara

	// insert(num, key) metodu num. indise key'i ekler
	cout << s1.insert(3, "x") << endl; // bugxra kara

	// clear() fonksiyonu stringi direkt siler
	s1.clear();
	cout << s1 << endl; // ""
}
