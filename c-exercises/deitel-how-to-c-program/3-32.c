#include <stdio.h>

int main() {
    int num, i = 0, j=0;

    printf("enter a num:");
    scanf("%d", &num);

    while (j<num)
    {
        for (int i = 0; i < num; i++)
        {
            printf("*");
        }
        printf("\n");
        j++;
    }
}
