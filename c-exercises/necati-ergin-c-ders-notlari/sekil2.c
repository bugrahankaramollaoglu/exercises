#include <stdio.h>

void draw(int nb);

int main()
{
    draw(4);
}

void draw(int nb)
{
    for (int i = 0; i < nb; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}