#include <iostream>

/* namespace konusu. namespace'ler typedefli structlar gibi düşünebilirsin. */

namespace myNS
{
	int x;
	void foo()
	{
		std::cout << "hello" << std::endl;
	}
}

int main()
{
	// using keywordü ile de kullanabilirsin
	using namespace myNS;
	x = 42;
	foo();

	// direkt de kullanabilirsin
	myNS::x = 42;
	myNS::foo();

	// bu iki part da aynı şeyi yapar
}
