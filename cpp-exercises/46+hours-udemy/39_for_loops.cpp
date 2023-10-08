#include <iostream>
using namespace std;

/* for loops in c++ */

/* endless for loop */
for (;;)
{
	cout << "thurisaz" << endl;
}

/* for looplarındaki değişkenleri dışarda kullanamazsın */

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		continue;
	}
	cout << i << endl; // hata verir
}
