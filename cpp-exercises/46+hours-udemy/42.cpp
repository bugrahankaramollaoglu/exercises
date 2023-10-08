#include <vector>
#include <iostream>
using namespace std;

/* do-while in c++ */

int main()
{
	int num;
	do
	{
		cout << "enter a num between 1-10 (both included): ";
		cin >> num;
	} while (num < 1 || num > 10);

	cout << "thanks" << endl;
}
