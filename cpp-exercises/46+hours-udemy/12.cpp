#include <iostream>
using namespace std;

int age = 100; // global

int main() {
	int age = 320; // local
	cout << age;
}

/* it will print 320 bc it first seeks the variable locally. if it finds,
it doesn't look for anything else.  */
