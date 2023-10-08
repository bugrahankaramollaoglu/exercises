/* Bir karakter dizisinin belirli bir karakterle doldurulması amacıyla
kullanılır. İşlevin string.h başlık dosyası içindeki bildirimi aşağıdaki gibidir:
char *strset(char *str, int ch);
İşlev birinci parametre değişkeninde başlangıç adresi olan yazıyı sonlandırıcı karakter
görene kadar ikinci parametre değişkeninde tutulan karakterle doldurur. Yazının
sonundaki sonlandırıcı karaktere dokunmaz.
İşlevin geri dönüş değeri yine doldurulan yazının başlangıç adresidir. */

#include <stdio.h>
char *mystrset(char *str, int ch)
{
    int i;
    for (i = 0; str[i] != '\0'; ++i)
        str[i] = ch;
    return str;
}
