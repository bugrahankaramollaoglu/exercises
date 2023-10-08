#include <iostream>

// isimsiz obje ya da değişkenlere anonymous obj/var denir

int add(int x, int y)
{
	return (x + y); // mesela burada anonymous variable kullandık, x+y'yi tutuyor ama ismi yok
}

// benzer şekilde objelerle de kullanabiliriz

class MyClass
{
public:
	MyClass(int val) : value(val)
	{
		std::cout << "Constructor called with value: " << value << std::endl;
	}

	~MyClass()
	{
		std::cout << "Destructor called with value: " << value << std::endl;
	}

private:
	int value;
};

int main()
{
	// Creating and using an anonymous class object
	// The object is created for the expression and destroyed immediately after
	MyClass(42); // An anonymous object with value 42

	std::cout << "After creating anonymous object" << std::endl;

	return 0;
}
