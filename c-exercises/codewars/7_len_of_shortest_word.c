// Simple, given a string of words, return the length of the shortest word(s).

#include <sys/types.h>
#include <string.h>
#include <stdio.h>

int find_short(char *str)
{
    // en kısa kelimeyi tutacak string
    char *shortest_str;

    // tüm str stringinin uzunlugu
    int len;

    // sayaç
    int i = 0;

    // en kısa kelimenin uzunlugu ve o anki hesaplanan
    // kelimenin uzunlugu
    int min_wlen = 0, word_len = 0;

    len = strlen(str);

    // len kadar tarayacağız çünkü str o kadar uzunlukta
    for (i = 0; i <= len; i++)
    {
        // "bugra kara molla" stringinde önce bugra'yı tarıyor
        if (str[i] && str[i] != ' ')
        {
            // ilk kelimenin uzunlugunu hesaplıyor
            word_len++;

            // sonra continue diyerek boşluktan kurtuluyor
            continue;
        }
        // şuan ilk kelimenin uzunlugu var word_len değişkenimizde

        // daha sonra min_wlen == 0 koşuluyla her halükarda buna giriyor
        // çünkü başta 0 ile ilklendirmiştik
        // daha sonraları için 2. koşul olarak eğer güncel kelimenin uzunlugu
        // en kısa kelimeden de kısaysa o zaman onun uzunlugunu yeni min_wlen yap
        if (min_wlen == 0 || word_len < min_wlen)
        {
            min_wlen = word_len;
        }

        // sonrada word_len'i 0la çünkü her kelimenin uzunlugu ayrı ayrı
        word_len = 0;
    }

    // finalde de stringdeki en kısa kelimenin uzunlugunu döndür
    return (min_wlen);
}

int main()
{
    char *str = "bugra kara molla asdasdasdog lugasd";
    printf("%d", find_short(str));
}
