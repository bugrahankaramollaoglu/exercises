#include <iostream>

// *this aslında &className anlamına gelir

class Calc
{
private:
	int m_value{0};

public:
	Calc &add(int value)
	{
		m_value += value;
		return *this;
	}
	Calc &sub(int value)
	{
		m_value -= value;
		return *this;
	}
	Calc &mult(int value)
	{
		m_value *= value;
		return *this;
	}

	int getValue() { return m_value; }
};

#include <iostream>

int main()
{
	Calc calc{};
	calc.add(5).sub(3).mult(4); // Calc& döndürdüğün için chainable-functions kullanabildin

	std::cout << calc.getValue() << '\n'; // 8
	return 0;
}
