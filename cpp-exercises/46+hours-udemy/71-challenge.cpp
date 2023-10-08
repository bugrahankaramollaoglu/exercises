#include <iostream>
#include <array>
using namespace std;

int *applyAll(int arr1[], int arr2[], int size1, int size2)
{
	int *arr3 = new int[size1 * size2];
	int pos{0};
	for (int i = 0; i < size2; i++)
	{
		for (int i2 = 0; i2 < size1; i2++)
		{
			arr3[pos] = arr1[i2] * arr2[i];
			pos++;
		}
	}
	return arr3;
}

void printArr(int ar[], int size)
{
	for (int i = 0; i < size; i++)
		cout << ar[i] << " ";
}

int main()
{
	int arr1[] = {10, 20, 30, 40};
	int arr2[] = {2, 3, 5};
	int *arr3 = applyAll(arr1, arr2, 4, 3);
	printArr(arr3, 12);
}
