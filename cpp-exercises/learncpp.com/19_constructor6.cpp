/* bunun bir çözümü = Default() yöntemidir */

class Date
{
private:
	int m_year{1900};
	int m_month{1};
	int m_day{1};

public:
	// Tell the compiler to create a default constructor, even if
	// there are other user-provided constructors.
	Date() = default;

	Date(int year, int month, int day) // normal non-default constructor
	{
		m_year = year;
		m_month = month;
		m_day = day;
	}
};

int main()
{
	Date date{};			  // date is initialized to Jan 1st, 1900
	Date today{2020, 10, 14}; // today is initialized to Oct 14th, 2020

	return 0;
}

/* Many new programmers are confused about whether constructors
create the objects or not. They do not - the compiler sets up
the memory allocation for the object prior to the constructor call. */

/* constructorların esasen 2 görevi vardır
	1) Constructors determine who is allowed to create an object
	of the class type. That is, an object of a class can
	only be created if a matching constructor can be found.

	2) Constructors can be used to initialize objects. Whether
	the constructor actually does an initialization is up to
	the programmer. It’s syntactically valid to have a constructor
	that does no initialization at all (the constructor
	still serves the purpose of allowing the object to
	be created, as per the above).
*/
