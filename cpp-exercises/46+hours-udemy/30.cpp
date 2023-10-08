#include <iostream>
using namespace std;

int main() {
	double num {};
	num = 100/3;
	cout << num << endl; // 33. çünkü castlemedin.
	num = static_cast<double>(100)/3;
	cout << num << endl; // 33.3333 çünkü artik explicit castledin.
}

/* eski c-tipi c++'ta (double) kullanılıyodu
fakat modern c++'ta static_cast<data_type> modeline geçildi.
bu daha efektif çünkü direkt dönüştürmek yerine
dönüştürülebilir mi kontrolü de yapiyor arka planda */
