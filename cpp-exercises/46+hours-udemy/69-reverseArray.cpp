#include <iostream>
using namespace std;

// reverse an array

void reverse_array(int *arr, int size)
{
	int tmp;
	int size2 = size;
	for (int i = 0; i < (size / 2) - 1; i++, size2--)
	{
		tmp = arr[i];
		arr[i] = arr[size2-1];
		arr[size2-1] = tmp;
	}
}
