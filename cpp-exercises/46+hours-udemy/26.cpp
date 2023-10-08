#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* Write a program that reads in a list of integers from
the user and stores them in a vector. The program should
then sort the integers in the vector in ascending order
and print the sorted list. */

void sortVector(std::vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (vec[j] > vec[j+1]) {
                int temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
}

int main()
{
	vector<int> myVec;
	int inp;

	// ctrl+d yapana kadar input alabilir
	while (cin >> inp)
	{
		myVec.push_back(inp);
	}

	sortVector(myVec);
	for (int i = 0; i < myVec.size(); i++) {
		cout << myVec[i] << " ";
	}
}
