#include <iostream>
using namespace std;

/* switch case kullanımı 2 */

int main()
{
	int choice = 4;
	switch (choice)
	{
	case 1:
	case 2:
	case 3:
		std::cout << "You entered a small number\n";
		break;
	case 4:
	case 5:
	case 6:
		std::cout << "You entered a medium number\n";
		break;
	default:
		std::cout << "You entered a large number\n";
	}
}

/* birden fazla case atayabilirsin tek bir outputa */
