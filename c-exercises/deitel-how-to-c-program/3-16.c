/* vergi hesaplama programı
for states, tax rate is %4 while for counties, %5.
algo:
1) önce değişkenleri tanımla
    * total amount
    * county'den toplanan vergi
    * state'ten toplanan vergi
    * month
2) sonra printf+scanf verileri iste
3) sonra -1 gelirse çıksın
4) -1 altı gelirse hata verdir
5) vermezse hesaplamaları yap */

#include <stdio.h>
int main()
{
    float totalAmount;
    float countySales;
    float stateSales;
    char month[20];

    printf("enter total amount collected, -1 to quit:");
    scanf("%f", &totalAmount);
    printf("which month are we in?:");
    scanf("%s", month);

    if (totalAmount == -1)
    {
        printf("that was it.\n");
        return 0;
    }
    if (totalAmount < -1)
    {
        printf("invalid input. please type above 0.\n");
        return 0;
    }
    else
    {
        countySales = (totalAmount / 100) * 95;
        stateSales = (totalAmount / 100) * 96;
        printf("we are now in: %s\n", month);
        printf("total collections: $ %.2f\n", totalAmount);
        printf("county sales tax: $ %.2f\n", countySales);
        printf("state sales tax: $ %.2f\n", stateSales);
        printf("total tax collected: $ %.2f\n", countySales + stateSales);
        return 0;
    }
}