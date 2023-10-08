/* demonstration of the difference between pre/postincrement */

#include <stdio.h>

int main(void)
{

    int n = 0;
    int tmp;

    printf("Enter an integer=");
    scanf("%d", &n);

    tmp = n;

    printf("n-- prints %d\n", tmp--);
    printf("--n prints %d\n", --n);

    return 0;
}