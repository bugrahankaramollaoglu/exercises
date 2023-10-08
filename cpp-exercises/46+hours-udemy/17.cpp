#include <iostream>
using namespace std;

/* int array tanımlama yolları

1)	int ar[3];
	ar[0] = 10;
	ar[1] = 20;
	ar[2] = 30;

2)  int ar[5] {10, 20};
	ilk ikisi 10 ve 20ye sonuncu(lar) 0'a eşitlenir

3) int ar[] {1,2,3,4,5};
	değer vermeden ilklendirebilirsin

4) int *ar = new int[5];

 */

int main()
{

	int arr[3];
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}

/* just like in c, the name of an array represents the location of the first element of the array.
the [index_num] represents the (sizeof(data_type_of_array) * index_num) amount of offset from the beginning of the array
yani adresin başından o kadar bit ötelenmiş halidir. */
