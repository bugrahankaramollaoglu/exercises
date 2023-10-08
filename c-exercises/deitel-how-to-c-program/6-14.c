/* (Union of Sets) Use one-dimensional arrays to solve the following problem. Read in two
sets of numbers, each having 10 numbers. After reading all values, display all the unique elements
in the collection of both sets of numbers. Use the smallest possible array to solve this problem. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a[100], b[100], n, m, i, j, position, swap;

    // taking a dynamic array set1 from user
    // storing it in array a.
    printf("Enter number of elements for set1:");
    scanf("%d", &n);
    printf("Enter %d Numbers:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // taking a dynamic array set2 from user
    // storing it in array b.
    printf("Enter number of elements for set2:");
    scanf("%d", &m);
    printf("Enter %d Numbers:", m);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    // declaring a 3rd array to hold them both
    // in the length of sum of other two
    int c[n + m];

    int y = 0;
    int x = 0;

    // c'ye önce a[] arrayini atiyoruz
    for (x; x < n; x++)
    {
        c[x] = a[y];
        y++;
    }

    y = 0;

    // sonra kaldığı yerden eklemeye devam etsin diye bir başka
    // z inti tanımlayıp bu sefer de b[] arrayini ekliyoruz peşine
    for (int z = 0; z < m; z++)
    {
        c[x + z] = b[y];
        y++;
    }

    // a[] arrayi
    printf("this is a[]: ");
    for (int i = 0; i < n; i++)
        printf("[%d] ", a[i]);

    // b[] arrayi
    printf("\nthis is b[]: ");
    for (int i = 0; i < m; i++)
        printf("[%d] ", b[i]);

    // c[] (a[] + b[]) arrayinin sırasız ilk hali
    printf("\nthis is UNSORTED, merged array c[]: ");
    for (int i = 0; i < n + m; i++)
        printf("[%d] ", c[i]);

    // c[]'yi sıralıyoruz bubble sort ile
    for (int i = 0; i < n + m; i++)
    {
        int temp;
        for (int j = i + 1; j < n + m; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    // sıralanmış c[]'yi yazdırıyoruz
    printf("\nthis is SORTED, merged array c[]: ");
    for (int i = 0; i < n + m; i++)
        printf("[%d] ", c[i]);

    // son olarak da tekrarlayan elemanları atılmış c'yi yazdırıyoruz
    printf("\nthis is SORTED, merged array c[] with only unique elements: ");
    for (int i = 0; i < n + m; i++)
    {
        while (c[i] == c[i + 1])
            i++;
        printf("[%d] ", c[i]);
    }
}