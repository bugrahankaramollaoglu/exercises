#include <iostream>

// aynı şeyi bir array ile de yapabilirsin

class Something
{
private:
	const int m_ar[5];

public:
	Something() : m_ar{10, 20, 30, 40, 50}
	{
	}

	void print()
	{
		std::cout << "m_ar: " << std::endl;
		for (const int &elem : m_ar)
		{
			std::cout << elem << " ";
		}
		std::cout << std::endl;
	}
};

int main()
{
	Something a;
	a.print();
}
