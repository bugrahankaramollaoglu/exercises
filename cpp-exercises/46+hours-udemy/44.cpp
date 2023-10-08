#include <iostream>
#include <vector>
using namespace std;

// nested loops

int main(void)
{
	int i3 = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int i2 = 0; i2 < 3; i2++)
		{
			cout << i3++ << endl;
		}
	}
	return (0);
}

// iç içe looplar (1.loopun_çalışma_sayısı * 2.loopun_çalışma_sayısı) kadar çalışırlar totalde.
