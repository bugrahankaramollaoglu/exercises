#include <iostream>
using namespace std;

// a function can return a pointer
// eğer bir pointer fonksiyon blogu icinde tanımlanmışsa stackte tutulur
// eğer malloc (C) ya da new (CPP) ile tanımlanmışsa heapte tutulur

int *createArr(size_t size, int initVal = 0)
{
	int *newStorage{nullptr};
	newStorage = new int[size]; // new == malloc
	for (size_t i = 0; i < size; i++)
	{
		*(newStorage + i) = initVal;
	}
	return newStorage;
}

void displayArr(const int *const array, size_t size)
{
	for (size_t i{0}; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main()
{
	int *myArr{nullptr};
	size_t size;
	int initVal{};

	cout << "how many int you want to store?" << endl;
	cin >> size;
	cout << "what would you like them to initalize to?" << endl;
	cin >> initVal;

	myArr = createArr(size, initVal);
	displayArr(myArr, size);
	delete [] myArr; // free
}
