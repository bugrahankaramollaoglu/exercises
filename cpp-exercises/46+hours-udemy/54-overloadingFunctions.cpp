#include <cstring>
#include <cctype>
#include <iostream>
#include <vector>
using namespace std;

// overloading functions

// iki tane fonksiyonun var. biri parametre olarak int, char aliyor diğeri double, double aliyor
// bu iki fonksiyona aynı ismi verebilirsin. daha sonra çağırırken verdiğin parametreye göre
// doğru olan fonksiyon çağrılır

void fun(int x, char y)
{
	cout << x << ' ';
	cout << y << endl;
}

void fun(double a, double b)
{
	cout << a + b << endl;
}

int main()
{
	fun(12, 's');	 // 12 s
	fun(12.3, 17.7); // 30
}

/* isimler aynı oldugu icin fonksiyonların parametre(ler) almak zorunda
diğer türlü return tipine göre ayırt edemiyor cpp */
