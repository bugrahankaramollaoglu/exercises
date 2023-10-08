#include <cstring>
#include <cctype>
#include <iostream>
#include <vector>
using namespace std;

/*
piramit yazdıran program
ABC
	A
   ABA
  ABCBA

*/

int main(void)
{
	char name[100];
	cout << "enter a String: ";
	cin >> name;
	int lenName = strlen(name);
	for (int i = 0; i < lenName; i++)
	{
		for (int i2 = lenName - i; i2 > 1; i2--)
			cout << " ";
		for (int i2 = 0; i2 <= i; i2++)
			cout << name[i2];
		for (int i2 = i - 1; i2 >= 0; i2--)
			cout << name[i2];
		cout << endl;
	}
}
