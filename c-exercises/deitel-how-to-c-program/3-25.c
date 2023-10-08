// tablo örneği

#include <stdio.h>
int main() {
    int num;
    int i, j= 0;
    int x = 0;

    printf("please enter a num:");
    scanf("%d", &num);
    x = num;

    printf("n\tn+3\tn+6\n\n");
    while (j < 2) 
    {
        while (i < 3)
        {
            printf("%d\t%d\t%d\n", num, num + 3, num + 6);
            num += x;
            i++;
        }
        j++;
        i = 0;
    }
}