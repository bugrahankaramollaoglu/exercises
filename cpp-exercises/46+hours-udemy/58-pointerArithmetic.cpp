#include <iostream>
using namespace std;

// pointer arithmetic

int main(void)
{
	int scores[]{10, 20, 30, 40, 50, -1};

	int *scores_ptr{scores}; // array oldugunda & kullanmadık

	while (*scores_ptr != -1)
	{
		cout << *scores_ptr << " ";
		scores_ptr++;
	}
	cout << endl;
}
