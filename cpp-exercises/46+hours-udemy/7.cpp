#include <iostream>
using namespace std;

int main()
{
	char name[10];
	char surname[10];
	cout << "enter a name: ";
	cin >> name;
	cout << "enter a surname: ";
	cin >> surname;
	cout << "your name: " << name << "\nsurname: " << surname << "\n";
}

/* when you read from the keyboard using cin
it first saves it in a buffer and then if the content
accords with the variable's type, it reads what is inside
of the buffer into the variable. */
