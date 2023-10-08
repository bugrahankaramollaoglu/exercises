#include <cuchar>
#include <iostream>

/* char16_t is a data type in C++ that represents a 16-bit character.
It is used to store Unicode characters that require more than 8 bits
to represent, such as non-Latin characters or emojis.
aynı şekilde char32_t ise 32bitlik bir char veri tipidir.
bunları kullanmak için <cuchar> include etmelisin */

int main()
{
	char16_t myChar = u'\u03B1'; // Greek letter alpha
	std::cout << myChar << std::endl;
	return 0;
}
