#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

// strings in c++

/* character ile ilgili fonksiyonlar
cctype kütüphanesinde bulunur (isalpha,num,digit,upper or tolower,upper etc.) */

int main(void)
{
	/* what is string literal?
		> string literal is sequence of characters between " ".
		> they are constant, cannot be modified
		> terminated by \0
	*/

	char myName0[] = "bugra";
	char myName[] = {"bugra"}; // these are the same
	cout << myName << endl;	   // bugra
	myName[2] = 'v';
	cout << myName << endl; // buvra

	char name2[8] = "bugra";
	/* dersen eğer kalan 2 byte da \0 ile doldurulur */
}
