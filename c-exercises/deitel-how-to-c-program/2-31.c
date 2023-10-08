/* number square cube
bir tabloda sayı, karesi, küpü yazdirma
yazdırma
*/

#include <stdio.h>
int main() {
    printf("number\t");
    printf("square\t");
    printf("cube\n");
    int i = 0;
    while (i < 11)
    {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
        i++;
    }
}