#include <iostream>
using namespace std;

// how to point pointers to functions
// this allows what is called pass-by-reference

void fun(int *intPtr)
{
	*intPtr += 2;
}

int main(void)
{
	int num {10};
	fun(&num);
	cout << num << endl; // 12
}
