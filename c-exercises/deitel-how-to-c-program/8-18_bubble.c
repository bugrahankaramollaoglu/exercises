#include <stdio.h>
#define SIZE 10

int main()
{

    // initialize the array that'll be bubble sorted
    int a[SIZE] = {3, 6, 9, 2, 4, 1, 10, 8, 5, 7};

    // puts() already adds a \n at the end
    puts("first: unsorted array");
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }

    // bubble-sort algorithm
    // first loop controls the number of passes
    // (kaç elemanın üzerinden geçecek)
    // eğer bunu 5 yaparsan ilk 5 elemana dokunmaz
    // kalanını sıralar
    // pass=1 deme sebebimiz 10 eleman olsa da 9 comparison
    // yapılacak olması
    for (unsigned int pass = 1; pass < SIZE; ++pass)
    {
        for (int i = 0; i < SIZE - 1; ++i)
        {
            // bubble-sort logic
            if (a[i] > a[i + 1])
            {
                // to use swap, we always need a temp
                // bir sonrakiyle bir önceki elemanı değiştiriyor
                // eğer 2. 1.den küçükse
                int tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
            }
        }
    }

    puts("");
    puts("now: array sorted");
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }

    puts("");
}