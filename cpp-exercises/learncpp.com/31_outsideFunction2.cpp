#include <iostream>

class Calc
{
private:
	int m_val = 0;

public:
	Calc(int val = 0);

	Calc &add(int val);
	Calc &sub(int val);
	Calc &mult(int val);

	int valGetter()
	{
		return m_val;
	}
};

Calc::Calc(int value) : m_val{value}
{
}

Calc &Calc::add(int v)
{
	m_val += v;
	return *this;
}

Calc &Calc::sub(int v)
{
	m_val -= v;
	return *this;
}

Calc &Calc::mult(int v)
{
	m_val *= v;
	return *this;
}
