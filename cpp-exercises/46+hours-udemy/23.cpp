#include <iostream>
#include <vector>
using namespace std;

// example of 2D vector in c++

int main()
{
	vector<vector<int>> my2DVector
	{
		{1, 2, 3},
		{10, 20, 30, 40},
		{55, 66, 77},
		{1000,20000,30000}
	};

	cout << "here are the elements:\n";
	cout << my2DVector[0][0] << endl; // 1
	cout << my2DVector[1][1] << endl; // 20
	cout << my2DVector[2][2] << endl; // 77
	cout << my2DVector[3].at(2) << endl; // 30000
}
