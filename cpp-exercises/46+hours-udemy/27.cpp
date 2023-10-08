#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/* Write a program that reads in a list of strings from
the user and stores them in a vector. The program should
then find and print the longest and shortest strings in vector. */

int main() {
	vector <string> myVec;
	string inp;
	while (cin >> inp) {
		myVec.push_back(inp);
	}
	string shortest = myVec[0];
	for (int i = 1; i < myVec.size(); i++) {
		if (myVec[i].length() < shortest.length())
			shortest = myVec[i];
	}
	cout << "shortest string is: " << shortest << endl;
	string longest = myVec[0];
	for (int i = 1; i < myVec.size(); i++) {
		if (myVec[i].length() > longest.length())
			longest = myVec[i];
	}
	cout << "longest string is: " << longest << endl;
	return 0;
}
