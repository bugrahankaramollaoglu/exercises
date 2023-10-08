#include <iostream>

/* C++'de veri tipleri
	1) int
	2) short
	3) long
	4) char
	5) float (7 digit precison)
	6) double (15 digit precision)
	7) boolean
	8) void
*/

#include <iomanip>

int main() {
	int bir {100};
	short iki {3};
	long üç {325235234234234};
	char dört {'x'};
	/* Note that beş is explicitly marked as a float by appending the f
	suffix to the value. If you don't include the f suffix, the value
	will be treated as a double, which has a higher precision than float. */
	float beş {32.1234567f};
	double altı {32.123456789};
	bool yedi {false};
	std::cout << bir << "\n";
	std::cout << iki << "\n";
	std::cout << üç << "\n";
	std::cout << dört << "\n";
	// std::cout << beş << "\n";	// std::cout default olarak 6 precisiona kadar izin veriyor.
	std::cout << std::setprecision(10) << beş << "\n"; // o yüzden setprecision() kullanmalısın
	// std::cout << altı << "\n";	// std::cout default olarak 6 precisiona kadar izin veriyor.
	std::cout << std::setprecision(10) << altı << "\n"; // o yüzden setprecision() kullanmalısın
	std::cout << yedi << "\n";
}
