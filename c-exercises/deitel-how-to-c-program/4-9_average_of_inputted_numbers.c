// calculates average of inputted numbers

#include <stdio.h>

int main() {
    int num_of_words;
    int num;
    int total=0;
    int i;
    printf("please enter how many numbers you'd like to input: ");
    scanf("%d", &num_of_words);
    i = num_of_words;
    while (num_of_words)
    {
        printf("enter the num: ");
        scanf("%d", &num);
        total += num;
        num_of_words--;
    }
    printf("your numbers average is: %d", total/i);
    return 0;
} 
