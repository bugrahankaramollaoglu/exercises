#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    (void)ac;
    double num1 = atof(av[1]);
    double num2 = atof(av[2]);
    double num3 = atof(av[3]);
    double sum = num1 + num2 + num3;
    double average = sum / 3;
    printf("sum of 3 nums is = %.2f", sum);
    printf("\naverage of 3 nums is = %.2f", average);
}