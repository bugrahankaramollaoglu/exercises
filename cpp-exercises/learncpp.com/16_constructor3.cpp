#include <cassert>
#include <iostream>
using namespace std;

/* constructorlari ayni zamanda parametrelerle de kullanabilirsin
böylece user-defined değerler atayabilirsin private memberlara */

class Student
{
private:
	int m_age{};
	int m_number{};

public:
	// constructor with parameters
	Student(int age = 15, int number = 0)
	{
		assert(age != 0);
		m_age = age;
		m_number = number;
	}

	int getAge() { return m_age; }
	int getNumber() { return m_number; }
};

/* but how can we use those parametered-constructor?
in two ways (list and direct initialization) */

int main()
{
	Student bugra{15, 389};	 // list-initialization. prefer that one
	Student ahmet(12, 1074); // direct-initialization
	cout << ahmet.getAge() << endl;
	cout << ahmet.getNumber() << endl;
}

/* constructorına default parametre olarak (15, n) verdiğin için

Student bir			-> Student(15, 0)
Student iki{} 		-> Student(15, 0)
Student üc{4} 		-> Student(15, 4)
Student bes(10, 20) -> Student(10, 20) olarak calısacaktır

 */
