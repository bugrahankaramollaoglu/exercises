#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    (void)ac;
    int num1 = atoi(av[1]);
    int num2 = atoi(av[2]);
    int num3 = atoi(av[3]);
    int sum = num1 + num2 + num3;
    int average = sum / 3;
    printf("sum of 3 nums is = %d", sum);
    printf("\naverage of 3 nums is = %d", average);
}