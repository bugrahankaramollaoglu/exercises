#include <stdio.h>
#include <stdbool.h>

// a program that computes the prime numbers between an interval

int main() {

    // stands for the prime number that is found, outer loop counter
    int p;

    // inner loop counter
    int i;

    // declaring our array that will hold primes
    // why 50? bc we're planning on finding primes b/w 0-100 and 50 is most it can hold.
    int primes[50] = {0};

    // this will help us skip even numbers to easify things
    int primeIndex = 2;

    // a boolean that tells whether or not  (true we found a prime number
    bool isPrime;

    // hardcode our first 2 prime numbers (2 and 3) bc 2 is only an exception in math (even but prime)
    primes[0] = 2;
    primes[1] = 3;

    // first loop that goes thru btween 5-100 (+2 diyoruz ki ikişer ikişer gitsin 5, 7, 9 vs. bc çiftler asal degil)
    // dolayısıyla bu for loop'u 5, 7, 9 ... 99'a kadar seçer. daha sonra 2. loop ile bu sayılardan asal olanları seçeceğiz
    for(p = 5; p <= 100; p = p + 2)
    {
        isPrime = true;

        // this inner loop will go thru all prime numbers and make sure doesn't go beyond squareRoot of i
        // if is prime is true
        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)

            // if it is divisible it is not a prime number
            if (p % primes[i] == 0)
                isPrime = false;

        // if it is prime we want to add it to the array
        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    // a 3rd loop to iterate every found prime
    for (i = 0; i < primeIndex; ++i)
        printf("%i ", primes[i]);

    printf("\n");
    return 0;
}

