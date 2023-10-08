#include <iostream>
using namespace std;

// switch-cases in c++

int main() {
	int num;
	cout << "enter a num: ";
	cin >> num;

	switch(num) {
		case 10:
			cout << "you entered 10" << endl;
			break;
		case 20:
			cout << "you entered 20" << endl;
			break;
		case 30:
			cout << "you entered 30" << endl;
			break;
		case 40:
			cout << "you entered 40" << endl;
			break;
		default:
			cout << "10, 20, 30 ve 40 harici girildi" << endl;
			break;
	}
	return 0;
}

/* switch case kullanmanın kuralları
	1) switch(exp) ifadesinde exp her zaman integral bir sayi olmalı (int, char, enum vs.)
	2) caseler farklı olmak zorunda
	3) her case exp ile uyumlu olmak zorunda
	4) default kısmı opsiyonel ama best practice kullanılmalı
	5) her bir case break ile sonlandırılmalı
*/
