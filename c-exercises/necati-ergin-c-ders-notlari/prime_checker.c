/* adı üstünde */

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
#include <stdio.h>
int main()
{
    if (is_prime(1) == 0)
    {
        printf("num is not prime\n");
        return 0;
    }
    printf("num is prime\n");
    return 0;
}