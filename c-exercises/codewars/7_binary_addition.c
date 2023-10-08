/* Implement a function that adds two numbers together
and returns their sum in binary.
The conversion can be done before, or after the addition.

The binary number returned should be a string.

Examples:(Input1, Input2 --> Output (explanation)))

1, 1 --> "10" (1 + 1 = 2 in decimal or 10 in binary)
5, 9 --> "1110" (5 + 9 = 14 in decimal or 1110 in binary)
*/

#include <stdint.h>
#include <stdio.h>

/* Implement a function that adds two numbers together
and returns their sum in binary.
The conversion can be done before, or after the addition.

The binary number returned should be a string.

Examples:(Input1, Input2 --> Output (explanation)))

1, 1 --> "10" (1 + 1 = 2 in decimal or 10 in binary)
5, 9 --> "1110" (5 + 9 = 14 in decimal or 1110 in binary)
*/

#include <stdint.h>
#include <stdio.h>

char *binary_add(unsigned a, unsigned b, char *binary)
{
    uint64_t sum = (uint64_t)a + b;

    if (sum == 0)
    {
        binary[0] = '0';
        binary[1] = '\0';
        return binary;
    }
    // i'yi forda değil de burda tanımlama sebebi
    // i. indise null koyarken kullanabilmek
    int i = 0;
    for (; sum > 0; i++)
    {
        //  chara cevirmek icin '0' ekliyoruz
        binary[i] = sum % 2 + '0';
        sum /= 2;
    }
    binary[i] = '\0';

    // 0 ya da 1 ise direkt onu döndür
    if (i == 1)
        return binary;

    // strrev işlemi
    char temp;
    for (int j = 0, k = i - 1; j < k; j++, k--)
    {
        temp = binary[j];
        binary[j] = binary[k];
        binary[k] = temp;
    }
    return binary;
}

int main()
{
    char output[40];
    char *result = binary_add(1, 1, output);
    printf("result is: %s\n", result);
}