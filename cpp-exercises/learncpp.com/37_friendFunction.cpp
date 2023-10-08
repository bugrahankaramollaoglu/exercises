#include <iostream>

/* A friend function is a function that can access the private
members of a class as though it was a member of that class.
To declare a friend function, simply use the friend keyword
in front of the prototype of the function you wish to be a
friend of the class.It does not matter whether you declare
the friend function in the private or public section of the class. */

class Accumulator
{
private:
	int m_value{0};

public:
	void add(int value) { m_value += value; }

	// Make the reset() function a friend of this class
	friend void reset(Accumulator &accumulator);
};

// reset() is now a friend of the Accumulator class
void reset(Accumulator &accumulator)
{
	// And can access the private data of Accumulator objects, normalde erişemiyor
	accumulator.m_value = 0;
}

int main()
{
	Accumulator acc;
	acc.add(5); // add 5 to the accumulator
	reset(acc); // reset the accumulator to 0
}
