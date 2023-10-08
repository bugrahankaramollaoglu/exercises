/*
    salary calculator program:
        * basic pay rate = 12$ * hour
        * overtime (40+ hours) = 18$ / hour
        * tax rates:
            ** %15 of the first 300$ salary
            ** %20 of the next 150$
            ** %25 of the rest
 */

#include <stdio.h>
#include <stdlib.h>

// we'll use constants to define pay rates
#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIMEPAYRATE 18

int main()
{

    // declare vars
    int hours = 0;
    double grossPay = 0.0; // brüt maaş
    double taxes = 0.0;
    double netPay = 0.0;

    printf("enter the number of hours you worked: ");
    scanf("%d", &hours);

    // calculate the gross pay (don't have to use {} bc using single statement)
    if (hours <= 40)
        grossPay = hours * PAYRATE;
    else
    {
        grossPay = 40 * PAYRATE;
        double overTimePay = (hours - 40) * OVERTIMEPAYRATE;
        grossPay += overTimePay;
    }

    // calculate taxes
    if (grossPay <= 300)

        taxes = grossPay * TAXRATE_300;

    else if (grossPay > 300 && grossPay <= 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += (grossPay - 300) * TAXRATE_150;
    }
    else if (grossPay > 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPay - 450) * TAXRATE_REST;
    }

    // calculate net pay
    netPay = grossPay - taxes;

    // display output
    printf("your gross pay is: %.2f\n", grossPay);
    printf("your taxes is: %.2f\n", taxes);
    printf("your net pay is: %.2f\n", netPay);

    return 0;
}