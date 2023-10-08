#include <iostream>
using namespace std;

// constantPointer may change the data it points, but cannot point to something else

int main(void)
{
	int age{30};
	int age2{54};

	int *const agePtr{&age};
	cout << *agePtr << endl; // 30

	*agePtr = 60;
	cout << *agePtr << endl; // 60. you can validly change the data

	// agePtr = &age2; but you cannot make it show some other variable
}
