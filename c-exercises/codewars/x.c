#include <stdlib.h>
#include <stdio.h>
char *shortcut(char *str_out, const char *str_in)
{
	int i = 0;
	int len = 0;
	while (str_in[len])
		len++;
	str_out = (char *)malloc(sizeof(char) * len + 1);
	while (str_in[i])
	{
		if (str_in[i] != 'a' && str_in[i] != 'e' && str_in[i] != 'i' && str_in[i] != 'o' && str_in[i] != 'u')
			str_out[i] = str_in[i];
		i++;
	}
	str_out[i] = '\0'; // write to str_out
	return str_out;	   // return it
}