/* Complete the solution so that it returns
true if the first argument(string) passed
in ends with the 2nd argument (also a string).
solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* my algo
bool solution(const char *string, const char *ending)
{
    int a = strlen(string);
    int b = strlen(ending);
    int j = 0;

    if (b > a) return false;

    for (int i = a - b; i < a; ++i)
    {
        if (string[i] != ending[j])
        {
            return false;
        }
        ++j;
    }
    return true;
} */

/* ternary
bool solution(const char *string, const char *ending)
{
    return (strlen(string) < strlen(ending)) ? false : strcmp(string+(strlen(string)-strlen(ending)),ending)==0;
} */

int main()
{
    const char *a = "sensei";
    const char *b = "i";
    printf("%d", solution(a, b));
}