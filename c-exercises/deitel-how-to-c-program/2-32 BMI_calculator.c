// BMI Calculator

#include <stdio.h>

int main() {
    float weight, height;

    printf("weight:");
    scanf("%f", &weight);

    printf("height:");
    scanf("%f", &height);

    printf("according to BMI VALUES\n");
    char *result = NULL;
    int average = (weight / (height * height));
    if (average <= 18.5)
        result = "underweight";
    if (average >= 18.5 && average <= 24.9)
        result = "normal";
    else
        result = "overweight";
    printf("you are %s", result);
}