#include <string>
#include <array>
#include <vector>
#include <iostream>
using namespace std;

class IntPair
{
public:
	int m_var1, m_var2{};

	void set(int a, int b)
	{
		m_var1 = a;
		m_var2 = b;
	}

	void print(void)
	{
		cout << m_var1 << " " << m_var2 << endl;
	}
};

int main()
{
	IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)

	IntPair p2{2, 5}; // initialize p2 values to (2, 2)

	p1.print();
	p2.print();

	return 0;
}
