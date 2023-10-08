#include <iostream>
#include <vector>
using namespace std;

/* Given a vector of integers named vec  that is provided for you, find the sum of the product of all pairs of vector elements.
You should declare an integer variable named result  and store the final product in this variable.

For example, given the vector  vec  to be {1, 2 , 3} , the possible pairs are (1,2), (1,3), and (2,3) .
So the result would be (1*2) + (1*3) + (2*3)  which is 11 .

Another example:
Given the vector vec  to be {2, 4, 6, 8} , the possible pairs are (2,4), (2,6), (2,8), (4,6), (4,8), and (6,8) .
So the result would be (2*4) + (2*6) + (2*8) + (4*6) + (4*8) + (6*8) which is 140 .

If the vector is empty or has only 1  element then the result  should be 0 . */

int calculate_pairs(vector<int> vec)
{
	//----WRITE YOUR CODE BELOW THIS LINE----

	int result{};
	int sum{};
	if (vec.size() == 0 || vec.size() == 1)
		result = 0;
	else
	{
		for (int i{}; i < vec.size(); i++)
		{
			for (int i2 = i + 1; i2 < vec.size(); i2++)
			{
				result += vec[i] * vec[i2];
			}
		}
	}
	return result;
}

int main()
{
	vector<int> myVec{2, 4, 6, 8};
	cout << calculate_pairs(myVec) << endl;
}
