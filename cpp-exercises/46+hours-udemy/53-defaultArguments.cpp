#include <cstring>
#include <cctype>
#include <iostream>
using namespace std;

// default arguments

void fun(double x, int y = 30)
{
	cout << "x is " << x << " and y is " << y << endl;
}

int main()
{
	fun(12.5, 20); // x is 12.5 and y is 20
	fun(12.5);	   // x is 12.5 and y is 30
}

/* burada y'ye default değer verdiğimiz için daha sonra
fonksiyonu çağırırken bir şey vermezsek hata vermez, default değeri verir */
