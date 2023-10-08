// 3 basamaklı, abc == a^3 + b^3 + c^3 esitligini saglayan sayilar

#include <stdio.h>
int main()
{
    int k = 100;

    while (k < 1000)
    {
        int y = k / 100;
        int o = k % 100 / 10;
        int b = k % 10;
        if (y * y * y + o * o * o + b * b * b == k)
            printf("%d\n", k);
        ++k;
    }
    return 0;
}