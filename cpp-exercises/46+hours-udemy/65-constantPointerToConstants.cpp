#include <iostream>
using namespace std;

// in this type, you can neither do both

int main(void)
{

	int age = 30;
	int age2 = 50;

	const int *const agePtr = &age;

	// *age = 22;
	// age = &age2; you cannot do anything bc it is purely constant
}
