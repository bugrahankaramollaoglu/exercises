// 2 ve 3. kuvvetleri gösteren tablo

#include <stdio.h>

int main() {
    int i = 1;

    printf("N\tN²\tN³\n\n");
    while (i < 11)
    {
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
        ++i;
    }
}