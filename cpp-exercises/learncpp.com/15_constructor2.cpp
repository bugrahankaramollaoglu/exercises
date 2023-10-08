#include <iostream>

/* ama eğer bir tane bile private üyesi varsa ilklendirmek için constructor
denen şeyi kullanmamız gerekir */

/* constructoris a special kind of class member function that is
automatically called when an object of that class is created. */

/* constructor ismi classla aynı olmak zorunda */

/* constructorlar bir şey döndürmezler (void dahil) */

/* parametre almayan (ya da alsa bile hepsinin default değeri olan)
constructorlara default constructor denir. örnek */

class Student
{
private:
	int age;
	int number;

public:
	// default constructor
	Student()
	{
		age = 15;
		number = 389;
	}

	int getAge() { return age; }
	int getNumber() { return number; }
};

int main()
{
	// value-initialization, should be preferred
	Student myStudent{};
	// ama default-initialization da kullanabilirdin:
	// Student myStudent;
	std::cout << myStudent.getAge() << std::endl;	 // 15
	std::cout << myStudent.getNumber() << std::endl; // 389
}
