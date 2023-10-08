/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_break_camel_case.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bugra <bugra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:41:31 by bkaramol          #+#    #+#             */
/*   Updated: 2022/10/29 19:28:14 by bugra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/* Complete the solution so that the function will break up camel casing, using a space between words.
"camelCasing"  =>  "camel Casing"
"identifier"   =>  "identifier"
""             =>  "" */

// returned buffer should be dynamically allocated and will be freed by a caller
char *solution(const char *camelCase)
{
    char *str;
    int len = strlen(camelCase);
    str = (char *)malloc(len + 2);
    int i = 0;
    int j = 0;

    while (camelCase[i])
    { // camelCase
      // str = camel
        if (camelCase[i] >= 'A' && camelCase[i] <= 'Z')
        {
            str[j] = ' ';
            j++;
            str[j] = camelCase[i];
        }
        else
        {
            str[j] = camelCase[i];
        }
        j++;
        i++;
    }
    return str;
}

int main()
{
    char a[] = "asdasdasd";
    printf("%s", solution(a));
}