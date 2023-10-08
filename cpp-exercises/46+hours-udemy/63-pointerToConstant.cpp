#include <iostream>
using namespace std;

// pointers to constants

int main(void)
{
	int age{22};
	int age2{50};

	// we defined the pointer as a constant by the const keyword
	const int *agePtr{&age};

	cout << *agePtr << endl; // 22
	// *agePtr = 42; You cannot change the data bc it is a constant
	// however you change make it point something else

	agePtr = &age2;

	cout << *agePtr << endl; // 50
}
