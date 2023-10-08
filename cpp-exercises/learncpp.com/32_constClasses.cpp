#include <iostream>

// just as data types can take const, so can classes
// constla tanımladıgın bir objenin memberlarını artık degistiremezsin

class Something
{
public:
	int m_value{};

	Something() : m_value{55} {}

	void setValue(int value) { m_value = value; }
	// int getValue() { return m_value; } --> böyle olsaydi kullanamiyoduk
	int getValue() const { return m_value; } // böyle olmak zrounda
};

int main()
{
	const Something something{}; // calls default constructor

	// something.m_value = 5; // compiler error: violates const
	// something.setValue(5); // compiler error: violates const

	// burada herhangi bir şeyi modify etmemene rağmen getValue()'yu kullanamiyoruz
	// çünkü const bir obje üzerinden erişmek istiyosan fonksiyon da const olmak zorunda
	std::cout << something.getValue() << std::endl;

	return 0;
}

// ayrıca dışarıda tanımladığın member method'larda hem classtaki prototipte
// hem de fonksiyon sonunda const olmak zorunda

// by logic, constructors cannot be const because they need to be able to initialize variables
