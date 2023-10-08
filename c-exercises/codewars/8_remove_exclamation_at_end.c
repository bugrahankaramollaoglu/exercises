/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8_remove_exclamation_at_end.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaramol <bkaramol@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 03:07:39 by bkaramol          #+#    #+#             */
/*   Updated: 2022/12/26 03:11:22 by bkaramol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*remove_mark(char *string)
{
	int	len;

	// modify string in-place and return it
	len = strlen(string);
	if (len)
	{
		if (string[len - 1] == '!')
		{
			string[len - 1] = 0;
		}
	}
	return (string);
}

int	main(void)
{
	char	a[];

	a[] = "12345!";
	printf("%s\n", remove_mark(a));
}

/* char *remove_mark (char *string)
{
	size_t len = strlen(string);
	
	if (len-- && '!' == string[len])
		string[len] = 0;
	
	return (string);
} */
