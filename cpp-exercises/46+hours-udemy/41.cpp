#include <iostream>
using namespace std;

/* range-based for loop in c++ */

int main()
{
	// şöyle bi arrayimiz var
	int scores[]{10, 20, 30, 40};

	for (int i : scores)
		cout << i << " "; // 10 20 30 40

	/* tıpkı pythondaki
		for i in myArr()
			print(i) gibi  	*/

	cout << endl;

	// veri tipini belirtmesek de olur auto kullanırsak
	int scores2[]{10, 20, 30, 40};
	for (auto i : scores2)
		cout << i << " "; // 10 20 30 40

	cout << endl;

	// you can also iterate over strings
	for (auto c : "bugra")
		cout << c << " "; // b u g r a

	cout << endl;

	// test
	for (auto c : "hello+my+friend")
	{
		if (c == '+')
			c = ' ';
		cout << c; // hello my friend
	}
	cout << endl;
}
