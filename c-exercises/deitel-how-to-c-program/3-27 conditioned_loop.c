// kullanıcı 1 ya da 2 inputu girene kadar tekrar tekrar soran program

#include <stdio.h>

int main() {
    int inp;
    
    printf("please enter 1 or 2: ");
    scanf("%d", &inp);

    while (inp != 1 || inp != 2)
    {
        printf("please enter 1 or 2: ");
        scanf("%d", &inp);
        if (inp == 1 || inp == 2)
            return 0;
    }
}