#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int sum(int, int);
int sum(int a, int b); // iki şekilde de fonksiyon prototipi yazılabilir.

int main()
{
	int a = sum(3, 5);
	cout << a << endl;
}

int sum(int a, int b)
{
	return a + b;
}
