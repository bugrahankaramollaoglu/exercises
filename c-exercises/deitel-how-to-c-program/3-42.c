/* 
(World-Population-Growth Calculator) Use the web to 
determine the current world population and the annual 
world population growth rate. Write an application that 
inputs these values, then displays the estimated world 
population after n years (will be inputted).
*/

#include <stdio.h>

int main() {
	long long population = 8000000000;
	float growth_rate = 0.01;
	int year;

	printf("what will be the population after # years?: ");
	scanf("%d", &year);

	population += (population * growth_rate)*year;
	printf("%lld", population);
}