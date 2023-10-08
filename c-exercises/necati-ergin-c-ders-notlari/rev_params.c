#include <stdio.h>
int main(int argc, char **argv)
{
    int k, i;
    for (k = argc - 1; k > 0; --k)
    {
        for (i = 0; argv[k][i]; ++i)
            ;
        for (i--; i >= 0; --i)
            putchar(argv[k][i]);
        putchar('\n');
    }
}