#include <iostream>
using namespace std;

/* A static member function is a function that belongs
to the class rather than a specific instance of the
class. It can be called using the class name, without
needing to create an object. Static member functions
can only access static member variables and other
static member functions.  */

class MyClass
{
public:
	static int staticVar;

	static void staticFunction()
	{
		cout << "This is a static function." << endl;
	}
};

int MyClass::staticVar = 0;

int main()
{
	MyClass::staticFunction(); // obje yaratmadan direkt cagirabiliyoruz
}

// static member fonksiyonları bir objeye baglı olmadıklarından *this kavramı yoktur
// static member fonksiyonları diğer statik fonksiyon ya da değişkenlere erişebilir
// ama statik olmayanlara erişemez çünkü non-staticler objelerle varlık kazanır, statikler tam tersi
