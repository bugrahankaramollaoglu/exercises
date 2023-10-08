/* print the first n prime numbers starting from 1 */

#include <stdio.h>

int is_prime(int nb)
{
    if (nb == 0 || nb == 1)
        return 0;
    for (int i = 2; i < nb; ++i)
    {
        if (nb % i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    printf("enter:");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (is_prime(i) == 1)
            printf("[%d] ", i);
    }
}