#include <iostream>
using namespace std;

// function that finds the max element in a given array

int find_max_element(int *arr, int size)
{
	int max = arr[0];
	for (int i = 1; i < size;i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

// Expected 67 as the max element in[12, 45, 67, 23, 9].
