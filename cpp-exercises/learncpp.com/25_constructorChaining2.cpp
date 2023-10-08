#include <iostream>
using namespace std;

// constructor chainin bir başka örneği

class MyClass
{
private:
	int m_value;

public:
	// Default constructor
	MyClass() : MyClass(0)
	{
		std::cout << "Default constructor" << std::endl;
	}

	// Constructor with parameter
	explicit MyClass(int value) : m_value(value)
	{
		std::cout << "Parameterized constructor" << std::endl;
	}

	// Constructor with more parameters
	MyClass(int value, double otherValue) : MyClass(value)
	{
		std::cout << "Additional parameter constructor" << std::endl;
		// Initialize other members here
	}

	void print()
	{
		std::cout << "Value: " << m_value << std::endl;
	}
};

int main()
{
	MyClass a;			 // Calls the default constructor
	MyClass b(42);		 // Calls the parameterized constructor
	MyClass c(10, 3.14); // Calls the additional parameter constructor

	a.print();
	b.print();
	c.print();

	return 0;
}

// First, a constructor that delegates to another constructor is
//  not allowed to do any member initialization itself. So your
// constructors can delegate or initialize, but not both.

// Second, it’s possible for one constructor to delegate to another
// constructor, which delegates back to the first constructor. This
// forms an infinite loop, and will cause your program to run out
// of stack space and crash. You can avoid this by ensuring all of
// your constructors resolve to a non-delegating constructor.
