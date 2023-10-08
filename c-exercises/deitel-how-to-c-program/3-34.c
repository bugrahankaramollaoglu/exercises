
/* floyd's triangle çizer 
1 
2 3 
4 5 6 
*/

#include <stdio.h>

int main() 
{
    // a burada yukarıdan asagıya kac satır yazılacak onun sayacını tutuyor
    // b burada her satırda kac sayı yazılacak bunu tutuyor
    // c burada yazılacak sayıların sayacını tutuyor 1'den n'e kadar
    int a, b, c = 1;
    int num;

    printf("Enter a number to define the rows in Floyd's triangle: ");  
    scanf("%d", &num);  

    for (a = 1; a <= num; a++)
    {
        for (b = 1; b <= a; b++)
            printf("%d ", c++);
        printf("\n");
    }

    return 0;
}
