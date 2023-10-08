#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> numbers(3);
	numbers[0] = 10;
	numbers[1] = 20;
	numbers[2] = 30;

	int to_add{0};
	cin >> to_add;
	numbers.push_back(to_add);
	cin >> to_add;
	numbers.push_back(to_add);
	numbers.resize(12);
	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << " ";
	}
}
