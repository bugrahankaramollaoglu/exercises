/*
(Guess the Number) Write a C program that plays the game of “guess the number” as follows: Your program chooses the number to be guessed by selecting an integer at random in the range
1 to 1000. If the player’s guess is incorrect, your program should loop until the player finally gets the number
right. Your program should keep telling the player Too high or Too low to help the player “zero in”
on the correct answer. [Note: The searching technique employed in this problem is called binary
search. We’ll say more about this in the next problem.]
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    num = rand();
    int guess;
    int counter = 1;
    while (guess != num)
    {
        printf("please guess the num between 1-100:");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("too high\n");
            counter++;
        }
        else if (guess < num)
        {
            printf("too low\n");
            counter++;
        }
    }
    printf("that's it! you got it right on your %d. try", counter);
    return 0;
}