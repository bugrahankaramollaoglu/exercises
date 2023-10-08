/* Standart strpbrk işlevi ile bir yazıda başka bir yazının
karakterlerinden herhangi biri aranır:
char *mstrpbrk(const char *s1, const char *s2);
Eğer s1 adresindeki yazının içinde s2 adresindeki yazının karakterlerinden herhangi biri
varsa işlev bu karakterin adresini döndürür. Eğer s1 yazısı içinde s2 yazısının
karakterlerinin hiçbiri yoksa işlev NULL adresine geri döner. */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#define SIZE 100

char *mstrpbrk(const char *s1, const char *s2)
{
    const char *p1, *p2;
    for (p1 = s1; *p1 != '\0'; ++p1)
        for (p2 = s2; *p2 != '\0'; ++p2)
            if (*p1 == *p2)
                return (char *)p1;
    return NULL;
}
int main()
{
    char str1[SIZE];
    char str2[SIZE];
    char *ptr;
    printf("birinci yazıyı girin : ");
    gets(str1);
    printf("ikinci yazıyı girin : ");
    gets(str2);
    ptr = strpbrk(str1, str2);
    if (ptr == NULL)
        printf("\"%s yazisinda\" (%s) karakterlerinden hic biri yok!\n",
               str1, str2);
    else
        printf("bulundu : (%s)\n", ptr);
    return 0;
}