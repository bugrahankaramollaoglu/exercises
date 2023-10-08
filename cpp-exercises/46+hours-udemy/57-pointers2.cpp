#include <iostream>
using namespace std;

// pointers 2

int main(void)
{
	string s1{"bugra"};
	string s2{"bugra"};

	string *ptr1{&s1};
	string *ptr2{&s2};

	cout << (ptr1 == ptr2) << endl; // returns false bc strings are not same though identical
}
