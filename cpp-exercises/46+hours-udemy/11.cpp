/* cpp'ta dört çeşit ilklendirme yapabilirsin:

	1) default initialization:
		int x;				// undefined value
		std::string str;
		double y;
		etc.

	2) value initialization:
		int x = int(); 		 // 0'a eşitlenir
		double y = double(); // 0.0'a eşitlenir

	3) copy initialization:
		int x = 32;
		double y = 10.604;
		std::string str = "bugra";

	4) direct initialization:
		int x(32);
		int y{500};
		double y(10.604);
 */

/*
	int age = 42; // C-like initialization
	int age (21); // constructor initialization
	int age {21}; // C++11 list initialization
 */

#include <iostream>

using namespace std;

/* if you have many variables, do not declare them at the beginning,
   declare them right before you use them. it is one of the best practices. */

int main() {
	int asd;
	cout << asd << endl; // ilklendirmediğin için her çağırışta random değer gelecek
	return 0;
}

/* unlike local variables global variables areinitialized to zero automatically.  */
