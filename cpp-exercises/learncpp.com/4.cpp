#include <string>
#include <array>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	string s{"bugra"};
	array<int, 3> arr{10, 20, 30};
	vector<double> vec {1.1, 2.2, 3.3};

	cout << "length : " << s.length() << endl;
}
