/* Every day you rent the car costs $40.
If you rent the car for 7 or more days,
you get $50 off your total. Alternatively,
if you rent the car for 3 or more days,
you get $20 off your total. Write a code
that gives out the total amount for different days(d). */

unsigned rental_car_cost(unsigned day)
{
    if (day < 3)
        return (day * 40);
    else if (day >= 3 && day < 7)
        return (day * 40 - 20);
    return (day * 40 - 50);
}