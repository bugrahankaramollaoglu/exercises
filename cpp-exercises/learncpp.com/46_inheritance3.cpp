#include <iostream>

// c b'den inherit aliyor, b a'dan inherit aliyor sonra hepsi a'dan aliyor

class A
{
public:
	A()
	{
		std::cout << "A\n"
				  << std::endl;
	}
};

class B : public A
{
public:
	B()
	{
		std::cout << "B\n"
				  << std::endl;
	}
};

class C : public B
{
public:
	C()
	{
		std::cout << "C\n"
				  << std::endl;
	}
};

int main()
{
	std::cout << "Constructing A: \n";
	A a;

	std::cout << "Constructing B: \n";
	B b;

	std::cout << "Constructing C: \n";
	C c;
}

/* sıraya dikkat edersen C hem B'den hem A'dan miras almasina rağmen önce A'yı yazdırıyor
bc superclass a is baser than superclass b */
