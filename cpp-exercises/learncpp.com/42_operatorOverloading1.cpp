#include <iostream>
using namespace std;

/* in cpp, operators are implemented as functions
so as you can do function overloading, meaning that
you can use same function name with different parameters multiple times,
you can also do this to operators, called operator overloading */

// most operators can be overloaded except [?: :: . .* (casts) etc.]

// you can only overload operators that exist

// you must use at least one user-defined type for the elements of your operator
// for instance you can't overload this operator -> operator+(int, double) but
// can overload that one -> operator+(int, myDouble)

/* there are 3 different ways to overload an operator
	1) friend function way
	2) member function way
	3) normal function way

lets see 1) friend function way */

class Money
{
private:
	int m_money{};

public:
	Money(int money) : m_money{money} {}

	// + operatörünü overload edelim
	friend Money operator+(const Money &m1, const Money &m2);

	int getMoney() const { return m_money; }
};

Money operator+(const Money &m1, const Money &m2)
{
	return m1.m_money + m2.m_money;
}

int main()
{
	Money m1{6};
	Money m2{8};
	Money moneySum{m1 + m2};
	cout << moneySum.getMoney() << endl; // 14
}
