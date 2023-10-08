#include <cstring> // c stringleriyle işlem yapmak için
#include <string>  // c++ stringleriyle işlem yapmak için
#include <iostream>
#include <vector>
using namespace std;

/* how to declare and initialize c++ strings */

int main(void)
{
	string s1;			   // ""
	string s2{"bugra"};	   // bugra + \0
	string s3{s2};		   // burada s2 de s3 de bugra olacak ama aynı bugra degil (farklı hafıza alanlarında).
	string s4{"bugra", 3}; // bug
	string s5{s3, 0, 2};   // bu (2. parametre starting index, 3. parametre length)
	string s6(5, 'x');	   // xxxxx and we use () not {}
}

/* unlike c, c++ strings are always initialized. */
