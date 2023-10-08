#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int total = 0;
    int total_sqrs = 0;
    int total_cubes = 0;

    printf("enter a num: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; ++i)
    {
        total += i;
    }

    for (int i = 1; i <= num; ++i)
    {
        total_sqrs += pow(i, 2);
    }

    for (int i = 1; i <= num; ++i)
    {
        total_cubes += pow(i, 3);
    }

    printf("%d'e kadar olan sayıların toplamı=%d\n", num, total);
    printf("%d'e kadar olan sayıların karelerinin toplamı=%d\n", num, total_sqrs);
    printf("%d'e kadar olan sayıların küplerinin toplamı=%d", num, total_cubes);
}