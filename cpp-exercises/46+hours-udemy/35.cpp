#include <iostream>
using namespace std;

/* else if vs. if farkı */

int main()
{
	int num;
	cout << "enter a num between 0-100: ";
	cin >> num;
	if (num > 75)
	{
		cout << "sayi 75ten büyük" << endl;
	}
	else if (num > 50) // eğer buraya else if yerine if yazarsan 75+ girdiğinde 2si de çalışır
	{
		cout << "sayi 50den büyük" << endl;
	}
}

/* else if sadece yukarıdaki kodlar yanlışsa çalışır
if ise yukarıdakilerin çalışıp çalışmadığına bakmaksızın kendisi karşılıyosa
çalışır */
