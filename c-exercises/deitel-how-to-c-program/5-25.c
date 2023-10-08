/* 
(Find the Maximum) Write a function that returns the largest of four floating-point numbers.
 */

#include <stdio.h>

float   largeFinder(float a, float b, float c) {
    float largest = a;
    if (b > a)
        largest = b;
    if (c > a)
        largest = c;
    return largest;
}

int main() {
    float a, b, c;
    printf("please input floats:");
    scanf("%f%f%f", &a, &b, &c);

    printf("largest is: %.2f", largeFinder(a, b, c));
    return 0;
}