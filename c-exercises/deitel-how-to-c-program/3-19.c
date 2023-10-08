/* haftalik calisma saatine göre maas hesaplayan program
40+ saatlerde saatlik ücret yariya düsüyor */

#include <stdio.h>

int main() {
    float salary, h_rate;
    int h_worked;

    // bunu dışarıda yazmazsan tam doğru çalışmıyor kod
    printf("Enter # of hours worked (-1 to end):");
    scanf("%d", &h_worked);

    // -1 girilmedigi sürece
    while (h_worked != -1)
    {
        printf("enter hourly rate of the worker:");
        scanf("%f", &h_rate);
        if (h_worked <= 40)
            salary = h_worked * h_rate;
        else if (h_worked > 40)
            salary = (40 * h_rate) + ((h_worked - 40) * (h_rate / 2));
        printf("salary is: $%.2f\n", salary);
        // -1 girilene kadar sorsun istedigimiz icin tekrar sorma olayını
        // while'ın sonunda yapmayı unutmuyoruz
        printf("Enter # of hours worked (-1 to end):");
	    scanf("%d", &h_worked);
    }
    return 0;
}