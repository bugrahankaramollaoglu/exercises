// radius calculator

#include <stdio.h>

int main()
{
    float radius;
    float pi = 3;

    printf("enter the radius: ");
    scanf("%f", &radius);

    printf("diameter is: %.f\n", radius * 2);
    printf("circumference is: %.f\n", 2 * pi * radius);
    printf("area is: %.f\n", pi * (radius * radius));
}