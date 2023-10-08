/* Bu işlevle bir yazı içinde başka bir yazı
aranır. İşlevin bildirimi aşağıdaki gibidir:
char *strstr(const char *p1, const char *p2);
Eğer p1 adresindeki yazı içinde p2 adresindeki yazı varsa, işlev yazının bulunduğu yerin
adresini döndürür (yani o yazı dahil stringin devamını).
Eğer yoksa işlevin geri dönüş değeri NULL adresidir. */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define size 100

int main()
{
    char s1[size];
    char s2[size];
    char *ptr;

    printf("yazi1'i girin: ");
    gets(s1);
    printf("yazi2'yi girin: ");
    gets(s2);

    ptr = strstr(s1, s2);

    if (!ptr)
        printf("%s içerisinde %s yok.\n", s1, s2);
    else
        printf("bulundu. (%s)\n", ptr);
    return 0;
}