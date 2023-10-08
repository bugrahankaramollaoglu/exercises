// Bu işlev ile bir yazının içinde başka bir yazıda olan ilk karakterin indisi bulunur.
// size_t strcspn(const char *p1, const char *p2);
// İşlev p1 yazısı içinde yazının başından başlayarak, p2 yazısının karakterlerinden herhangi birini içermeyen yazının uzunluğu
// değerine geri döner

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *s1;
    char *s2;
    s1 = malloc(100);
    s2 = malloc(100);

    int index;

    printf("yaziyi girin: ");
    scanf("%s", s1);
    printf("karakterler: ");
    scanf("%s", s2);
    index = strcspn(s1, s2);
    printf("(%s)\n", s1 + index);
    s1[index] = '\0';
    printf("(%s)\n", s1);

    return 0;
}
