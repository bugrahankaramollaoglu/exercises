#include <iostream>
using namespace std;

// constructors in cpp: are way to initialize the attributes of
// a class when the object is created.

class God
{
public:
	string name;
	int health;
};

int main()
{
	God god1;
	god1.name = "bugra";
	cout << god1.name << endl;
}
