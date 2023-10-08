// *'lerle içi boş kare çizme

#include <stdio.h>

int main() {
    int side, rowPosition, size;
    printf("enter a num:");
    scanf("%d", &side);
    size=side;
    while (side>0)
    {
        rowPosition = size;
        while (rowPosition > 0)
        {
            if (size == side)
                printf("*");
            else if (side == 1)
                printf("*");
            else if (rowPosition == 1)
                printf("*");
            else if (rowPosition == size)
                printf("*");
            else
                printf(" ");
            --rowPosition;
        }
        printf("\n");
        --side;
    }
    return 0;
}