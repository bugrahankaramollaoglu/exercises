/* setter methods, aka mutator methods, are used to modify private
data members. */

/* they are usually public like getter */

class Student
{
private:
	int age;

public:
	// setter
	void ageSetter(int newAge) { age = newAge; }
};
