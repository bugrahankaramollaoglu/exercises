#include <stdio.h>

int main()
{
	printf("%d\n", __LINE__); // __LINE__ o anki satır numarasını verir
	printf("%s\n", __FILE__); // __FILE__ o anki dosya ismini verir
	printf("%s\n", __DATE__); // __DATE__ o anki dosyanın derlenme tarihini verir
	printf("%s\n", __TIME__); // __TIME__ o anki dosyanın derlenme saatini verir
	printf("%d\n", __STDC__); // __TIME__ o anki dosyanın derlenme saatini verir
}
