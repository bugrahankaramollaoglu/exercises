#include <iostream>
using namespace std;

// if you try to do same thing in different constructors you'll have problems like

class Fun
{
public:
	Fun()
	{
		// do A
	}
	Fun(int val)
	{
		// do A
		// do B
	}
};

// burada iki tane constructor var biri default biri parametered-constructor
// bunun çaresi constructor-chaining denen şey, yani bir class içerisinde bir constructorın
// bir başka constructorı çağırması (aka construction delegation)

// bir constructor bir diğerini çağırsın istiyosan member initialization listte constructorı çağır

class Something
{
private:
public:
	Something()
	{
		// do A
	}

	Something(int a) : Something{}
	{
		// do B
	}
};
