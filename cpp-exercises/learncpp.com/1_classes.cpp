#include <iostream>

/*   from: learncpp.com   */

// what you do with structs, you can do better with classes
struct DateStruct
{
	int year{};
	int month{};
	int day{};
};

// like struct, class definitions do not allocate anything
class DateClass
{
public:
	int yearr;
	int monthh;
	int dayy;
};

int main()
{
	DateStruct today{2001, 8, 7};

	std::cout << today.day << std::endl;
	std::cout << today.month << std::endl;
	std::cout << today.year << std::endl;

	DateClass todayy{2023, 8, 8};

	std::cout << std::endl;

	std::cout << todayy.dayy << std::endl;
	std::cout << todayy.monthh << std::endl;
	std::cout << todayy.yearr << std::endl;
}
