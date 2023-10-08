#include <iostream>
using namespace std;

int main() {
	int arr[10] {0};
	// arr[0] {100} diyerek ilk indisi 100'e eşitleyemiyosun
	arr[0] = 100;
	arr[9] = 1000;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
}
