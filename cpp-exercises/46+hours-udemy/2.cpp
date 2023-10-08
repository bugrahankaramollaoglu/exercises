#include <iostream>

int main() {
	std::cout << "enter your favourite number: ";
	int num;
	// cin'i (si in) de scanf gibi düşünebilirsin
	std::cin >> num;
	std::cout << "your number is: " << num << ". good bye!" << std::endl;
}

/*
	<< işareti insertion operator olarak geçer.

	>> işareti extraction operator olarak geçer.

	cout output için

	cin input için kullanılır

	:: scope resolution operatör olarak geçer.

 */
