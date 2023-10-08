#include <iostream>
using namespace std;

/* beside variables, we can define functions under classes
they are then called METHODS */

class MyClass
{
public:
	int age;
	int thisYear;

	void birthYear(int age, int year)
	{
		cout << "you were born in: " << year - age << endl;
		return;
	}
};

int main()
{
	MyClass mc{22, 2023};
	mc.birthYear(mc.age, mc.thisYear); // you were born in 2001
}
