#include <iostream>
#include <vector>
using namespace std;

/* c++'de mallocla yer ayirma ve freeleme */

int main() {
	char* a = new char[100];
	delete[] a;
}
