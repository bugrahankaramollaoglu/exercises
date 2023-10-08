#include <iostream>
using namespace std;

// liste halinde ilklendirme işini parametrelerden de alabiliriz

class Something
{
private:
	int a{};
	double b{};
	char c{};

public:
	Something(int val_a, double val_b, char val_c = 'x') : a{val_a}, b{val_b}, c{val_c}
	{
	}
	void print()
	{
		std::cout << "Something(" << a << ", " << b << ", " << c << ")\n";
	}
};

int main()
{
	Something something{1, 22.53}; // 3. parametre default
	something.print();			   // Something(1, 22.53, x)
}
