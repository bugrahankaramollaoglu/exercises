#include <iostream>

// this keyword is a pointer to the current instance of the class
// allows you to access members and methods of the current instance within a member function

class Fun
{
private:
	int m_a{1};
	int m_b{2};

public:
	Fun()
	{
	}

	Fun(int a, int b) : m_a{a}, m_b{b}
	{
	}

	void print()
	{
		std::cout << m_a << '\n';
		std::cout << m_b << '\n';
	}

	void reset()
	{
		*this = Fun{};
		// m_a = 1;
		// m_b = 2; tekrardan yazmak yerine this kullaniyoruz
	}
};

int main()
{
	Fun x{10, 20};
	x.print(); // 10 20
	x.reset();
	x.print(); // 1 2
}
