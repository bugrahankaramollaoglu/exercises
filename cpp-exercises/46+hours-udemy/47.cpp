#include <cstring>
#include <cctype>
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	char *myName;
	myName = "bugra";
}

/* yukarıdaki ifade geçerlidir ama aşağıdaki değildir */

int main(void)
{
	char myName[10];
	// myName = "bugra"; // eğer statik tanımlamışsan böyle direkt string literal atayamiyosun
	// bunun için strcpy() kullanman gerekir
	strcpy(myName, "bugra");
	cout << myName << endl;
}
