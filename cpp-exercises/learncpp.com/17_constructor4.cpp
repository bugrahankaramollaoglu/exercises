#include <iostream>

/* eğer constructor belirlemezsen cpp otomatik olarak
default bir constructor tanımlar, buna implicit constructor denir */

class Date
{
private:
	int m_year{2001};
	int m_month{8};
	int m_day{7};

	// No user-provided constructors, the compiler generates a default constructor.
};

int main()
{
	Date date{}; // default constructor oldugu icin bu ifade hata vermedi
}

