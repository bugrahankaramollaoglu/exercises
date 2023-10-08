#include <vector>
#include <iostream>
using namespace std;

/* continue
	-> no further statements in the body of the loop are executed
	-> control immediately goes to the beginning of the loop for the next iteration

   break
	-> no further statemets are executed
	-> o anki loop is terminated (in case of nested loops)
	->
*/

int main()
{
	vector<int> values{10, 2000, 30, 2000, 25, 2000, 40, 50, 2000, 50, 60, 70, 80};
	for (auto val : values)
	{
		if (val == 60)
			break;
		else if (val == 2000)
			continue;
		else
			cout << val << " ";
	}
	cout << endl;
}
