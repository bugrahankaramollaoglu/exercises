#include <iostream>
#include <cassert>
#include <cstddef>
using namespace std;

// A destructor is another special kind of class
// member function that is executed when an object
// of that class is destroyed. Whereas constructors
// are designed to initialize a class, destructors
// are designed to help clean up.

// bir destructor ~className() şeklindedir

// bir classta birden fazla constructor, yalnızca bir destructor olabilir

class IntArray
{
private:
	int *m_ar{};
	int m_arLen{};

public:
	// constructor
	IntArray(int len)
	{
		assert(len > 0);
		m_ar = new int[static_cast<size_t>(len)]{};
		m_arLen = len;
	}

	// destructor
	~IntArray()
	{
		delete[] m_ar;
	}

	// setter & getter
	void valueSetter(int index, int val) { m_ar[index] = val; }
	int valueGetter(int index) { return m_ar[index]; }
	int lenGetter() { return m_arLen; }
};

int main()
{
	// creating instance
	IntArray myAr(5);

	// setting
	myAr.valueSetter(0, 10);
	myAr.valueSetter(1, 20);
	myAr.valueSetter(2, 30);
	myAr.valueSetter(3, 40);
	myAr.valueSetter(4, 50);

	// getting
	cout << myAr.valueGetter(0) << endl;
	cout << myAr.valueGetter(1) << endl;
	cout << myAr.valueGetter(2) << endl;
	cout << myAr.valueGetter(3) << endl;
	cout << myAr.valueGetter(4) << endl;
}

// destructors are normally executed when computer is done with a class
// but destructor is not called if std::exit() function is executed in cpp. remember that
