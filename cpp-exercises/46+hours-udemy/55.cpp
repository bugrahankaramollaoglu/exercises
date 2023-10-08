#include <iostream>
using namespace std;

// pointers

/* its mostly same as with pointers in c */

int main(void)
{
	int *myPtr{nullptr}; // initialized
	int a = 305;
	myPtr = &a;
	cout << myPtr << endl; // her çağırışında random adres verir.
						   // bunun sebebi program bitince a'nın hafızadaki değerinin silinmesi,
						   // her çağrışında ram'de yeni yere atanmasıdır.
						   // eğer global tanımlasaydık bu adres değişmeyecekti
}
