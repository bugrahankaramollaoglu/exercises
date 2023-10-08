/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8_vowel_remover.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaramol <bkaramol@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:16:32 by bkaramol          #+#    #+#             */
/*   Updated: 2022/10/26 23:20:42 by bkaramol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function called shortcut to remove the lowercase vowels (a, e, i, o, u) in a given string. */

#include <stdlib.h>
#include <stdio.h>

char *shortcut(char *str_out, const char *str_in)
{
	int i = 0;
	int j = 0;
	while (str_in[i])
	{
		if (str_in[i] != 'a' && str_in[i] != 'e' && str_in[i] != 'i' && str_in[i] != 'o' && str_in[i] != 'u')
			str_out[j++] = str_in[i];
		i++;
	}
	str_out[j] = '\0'; // write to str_out
	return str_out;	   // return it
}

/* başkasının çözümü
#include <string.h>

char *shortcut (char *r, const char *s) {
  char *bf = r;
  for (; *s; s++) if (!strchr("aeiou", *s)) *(r++) = *s;
  *r = '\0';
  return bf;
} */

/* tek satırda cözümü vay aq
char *shortcut (char *r, const char *s) { for (char *p=r;*p=*s;) p+=!strchr ("aeiou", *s++); return r; } */

int main()
{
	char in[] = "aeiouBUGRA";
	char out[] = "";
	printf("%s", shortcut(out, in));
}