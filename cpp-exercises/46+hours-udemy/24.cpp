#include <iostream>
#include <vector>
using namespace std;

/* Write a program that reads in a list of integers from
the user and stores them in a vector. The program should
then find and print the sum, minimum, and maximum of the
integers in the vector. */

int main()
{
	cout << "please enter 3 nums: \n";
	vector<int> myVec;
	int inp;
	for (int i = 0; i < 3; i++) {
		cin >> inp;
		myVec.push_back(inp);
	}

	int min, max;
	int sum {0};

	for (int i = 0; i < 3; i++)
	{
		sum += myVec[i];
	}
	cout << "sum is: " << sum << endl;

	min = myVec[0];
	for (int i = 1; i < myVec.size(); i++)
	{
		if (myVec[i] < min)
			min = myVec[i];
	}
	cout << "min is: " << min << endl;

	max = myVec[0];
	for (int i = 1; i < myVec.size(); i++)
	{
		if (myVec[i] > max)
			max = myVec[i];
	}
	cout << "max is: " << max << endl;

	/* bunlar yerine şöyle de yapilabilir

	#include <algorithm>
	int min_val = *min_element(numbers.begin(), numbers.end());
    int max_val = *max_element(numbers.begin(), numbers.end()); */
}
