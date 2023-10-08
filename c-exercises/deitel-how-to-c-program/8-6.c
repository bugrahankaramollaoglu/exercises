#include <stdio.h>
#include <unistd.h>

int main()
{
    char s[100];
    printf("enter a string: ");
    scanf("%s", s);
    int i = 0;
    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'z')
            s[i] += 32;
        write(1, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}
