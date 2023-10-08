#include <iostream>

// üç, classlarla kullanımı. static member variables/functions olayi. mesela

/* a static member variable is a variable that is shared
among all instances of a class. Unlike regular member variables,
which have separate copies for each object, a static member
variable is common to all objects of that class. */

class Something
{
public:
	static int s_value;
};

int Something::s_value{1};

int main()
{
	Something first;
	Something second;

	first.s_value = 2;

	std::cout << first.s_value << '\n';
	std::cout << second.s_value << '\n';
	// static vermeseydin burasi 1 kalırdı
	// Because s_value is a static member variable,
	// s_value is shared between all objects of the class
}
