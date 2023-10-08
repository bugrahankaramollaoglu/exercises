/* kendisine adresleri gönderilen yazıları
birleştirecek ve değişken sayıda argümanla
çağırılabilecek bir fonksiyon yazalım */

/* Parametre değişkeni olan ptr nin değeri NULL adresi olmadığı sürece dönen bir while
döngüsü oluşturulduğunu görüyorsunuz. Döngünün her turunda işleve gönderilen
argümanlardan her birinin değeri va_arg makrosuyla elde ediliyor ve bu değer ptr
göstericisine atanıyor. ptr göstericisinin gösterdiği yazı önce yerel buffer isimli dizideki
yazının sonuna standart strcat işleviyle ekleniyor. İşleve çağrı ile gönderilen son
argümanın NULL adresi olması gerekiyor. ptr göstericisinin değeri NULL adresi olduğunda
buffer dizisindeki yazı dinamik bir bellek bloğuna kopyalanıyor. İşlev içinde va_end
makrosu çağırıldıktan sonra işlev dinamik bloğun adresiyle geri dönüyor. */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#define BUFFER 1000

char *birlestir(const char *ptr, ...)
{
    va_list ap;
    char *pd;
    int i;
    char buffer[BUFFER] = {'\0'};
    va_start(ap, ptr);

    while (ptr)
    {
        strcat(buffer, ptr);
        ptr = va_arg(ap, const char *);
    }

    pd = (char *)malloc(strlen(buffer) + 1);
    if (pd == NULL)
    {
        printf("bellek yetersiz!\n");
        exit(EXIT_FAILURE);
    }
    va_end(ap);
    return strcpy(pd, buffer);
}

int main()
{
    char *myS = birlestir("bugra", "kara", "molla", "oglu", '\0');
    puts(myS);
    free(myS);
    return 0;
}