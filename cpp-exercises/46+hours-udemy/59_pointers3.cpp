#include <iostream>
using namespace std;

// pointers 3

int main(void)
{
	string s1{"bugra"};

	char *s1_ptr{nullptr};
	s1_ptr = &s1[3];

	cout << *s1_ptr << endl; // r verdi
}
