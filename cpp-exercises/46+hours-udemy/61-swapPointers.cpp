#include <iostream>
using namespace std;

//

void swapPointers(int *ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void)
{
	int a = 42;
	int b = 200;

	int *aPtr = &a;
	int *bPtr = &b;

	swapPointers(aPtr, bPtr);

	cout << "a: " << *aPtr << endl;
	cout << "b: " << *bPtr << endl;
}
