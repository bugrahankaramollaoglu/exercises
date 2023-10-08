#include <iostream>
using namespace std;

class God
{
	// attributes
	string name;
	int health;
	string godOfWhat;

	// methods
	void talk(string text);
	bool isDead();
};

int main()
{
	// after creating class, create objects
	God Hermes;
	God Elohim;

	// in form of pointers
	God *Zeus = new God();
	delete Zeus;

	// in form of arrays
	God gods[]{Hermes, Elohim};
}
