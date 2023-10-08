#include <iostream>

// static kelimesi cpp'de üç işe yarar
// bir, fonksiyon içinde tanımladığın bir değişkenin değerini
// fonksiyondan çıksa da kaybetmemesine:

int generateID()
{
	static int s_id{0};
	return ++s_id;
}

int main()
{
	std::cout << generateID() << '\n'; // 1
	std::cout << generateID() << '\n'; // 2
	std::cout << generateID() << '\n'; // 3
}

// iki, bir değişken ya da fonksiyon başına yazıldığında o değişken
// ya da fonksiyonun yalnızca o dosyada kullanılabilir hale gelmesine
