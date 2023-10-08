#include <iostream>
using namespace std;

// ayrıca statik bir sınıf değişkeni instance'lara değil sınıfa ait
// oldugundan direkt sınıf üzerinden erişebiliyosun

class MyClass
{
public:
	static int staticVar; // Declaration of static member variable
};

int MyClass::staticVar = 0;

int main()
{
	MyClass obj1;
	MyClass obj2;

	obj1.staticVar = 5;				// Accessing through an object
	cout << obj2.staticVar << endl; // Outputs 5, not 0

	// Alternatively, you can access the static variable using the class name
	MyClass::staticVar = 10;
	cout << obj1.staticVar << endl; // Outputs 10
}
