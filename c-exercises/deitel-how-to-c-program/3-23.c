/* program that calculates the largest of n scanfd numbers */

#include <stdio.h>

int main() {
    int myArr[100];
    int num;

    printf("please enter how many nums you want to enter: ");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i)
    {
        printf("enter num%d: ", i + 1);
        scanf("%d", &myArr[i]);
    }

    for (int i = 1; i < num; i++)
    {
        if (myArr[0] < myArr[i])
            myArr[0] = myArr[i];
    }

    printf("the largest among them is: %d", myArr[0]);
}
