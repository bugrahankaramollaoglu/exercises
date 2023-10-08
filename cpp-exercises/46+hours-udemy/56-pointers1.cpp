#include <iostream>
using namespace std;

// pointer

int main(void)
{
	string s1{"bugra"};

	cout << s1 << endl; // bugra

	string *s1_ptr{&s1}; // s1'e iki adet ptr atayalim
	string *s1_ptr2{&s1};

	cout << s1_ptr << endl;				 // 0x7ffe7a462760
	cout << (s1_ptr == s1_ptr2) << endl; // returns true bc both point to same memory
}
