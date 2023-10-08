/* bir isci her hafta $200 + satışlardan %9 kâr aliyor. -1 girene kadar
her iscinin haftalik kazancini hesaplayan bir fonksiyon yaz.

algo:
1) öncelikle -1 girene kadar dedigi icin bunu bir while döngüsü icinde
yazmamız gerekiyor. while (x != -1) gibi ki her seferinde yeni bir iscinin
kazancini sorup hesaplasın
2) önce while (salesAmount != -1) diyerek baslayacagız
3) -1 girilmedigi müddetce soru sorup scanf'e atıp hesaplayıp printfle yazdırıyoruz
4) thats it
 */

#include <stdio.h>

int main() {
    int salary = 200;
    float salesAmount;
    float salesIncome;

    while (salesAmount != -1)
    {
        printf("Enter sales in dollars (-1 to end):");
        scanf("%f", &salesAmount);
        if (salesAmount == -1)
            break;
        printf("salary is: $%.2f\n", (salary + ((salesAmount / 100) * 9)));
    }
}
