#include <iostream>

// bir classtaki constructor ya da metotları readability için dışarıda tanımlayabilirsin
// className::name ve class içerisinde prototip şartıyla

class Something
{
private:
	int m_1;
	char m_2;

public:
	// constructor prototipi
	Something(int a, char b);

	// metot prototipi
	void setVal(int aa, char bb);

	void print()
	{
		std::cout << m_1 << std::endl;
		std::cout << m_2 << std::endl;
	}
};

// yukarıdaki sınıfı bir .h içine koyup .cpp'de .h'ı çağırarak
// da aynı şeyi yapabilirsin

void Something::setVal(int a, char b)
{
	m_1 = a;
	m_2 = b;
}

Something::Something(int a, char b)
{
	setVal(a, b);
}

int main()
{
	Something x(15, 'p');
	x.print();
}
