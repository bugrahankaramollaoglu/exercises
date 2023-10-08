#include <iostream>
using namespace std;

// bir class bir başka classtan türeyebilir.
// bu olaya inheritance yani miras alma denir.
// miras alınan class'a base/super/parent class denir
// miras alan class'a derived/sub/child class denir
// sentaksı şöyledir -> class ChildClass : public ParentClass { ... }

class Person
{
public:
	string m_name;
	int m_age;

	Person(string name = "", int age = 0) : m_name{name}, m_age{age} {}
	const string &getName() const { return m_name; }
	int getAge() const { return m_age; }
};

// inheriting
class Student : public Person
{
public:
	int m_studentID;
	Student(string name, int age, int studentID = 0) : Person(name, age), m_studentID{studentID}
	{
	}
};

int main()
{
	// create an object from the parent class
	Person p1{"Burak", 21};

	// create an object from the child class
	Student s1("Ahmet", 22, 1074);

	cout << "Person: " << p1.getName() << " " << p1.getAge() << endl;

	cout << "Student: " << s1.getName() << " " << s1.getAge() << " id: " << s1.m_studentID << endl;
}
