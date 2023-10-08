#include <stdio.h>

int	main(void)
{
	// a) Convert the character stored in variable c to an uppercase letter. Assign the result to variable c.
	c - 32;
	// b) Determine whether the value of variable c is a digit.
	if (c >= '0' && c <= '9')
	// d) Read a line of text into array s1 from the keyboard. Do not use scanf.
	fgets(s1, 100, stdin);
	// e) Print the line of text stored in array s1. Do not use printf.
	puts(s1);
	// f) Assign ptr the location of the last occurrence of c in s1.
	ptr = strrchr(s1, c);
	// g) Print the value of variable c. Do not use printf.
	write(1, &c, 1);
	// h) Determine whether the value of c is a letter.
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	// i) Read a character from the keyboard and store the character in variable c.
	scanf("%c", &c);
	// m) Copy the string stored in array s2 into array s1.
	strcpy(s1, s2);
	// s) Determine the length of the string in s1. Print the result.
	strlen(s1);
}
