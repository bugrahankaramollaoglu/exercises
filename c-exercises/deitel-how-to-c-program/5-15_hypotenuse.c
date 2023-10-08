/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-15.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaramol <bkaramol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:04:31 by bkaramol          #+#    #+#             */
/*   Updated: 2022/08/12 18:13:22 by bkaramol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Hypotenuse Calculator

#include <stdio.h>

double hypo_calculator(double s1, double s2)
{
	double hypo_sqr = 0;
	int i = 0;

	hypo_sqr = (s1 * s1) + (s2 * s2);
	while (i < hypo_sqr / 2)
	{
		if (i * i == hypo_sqr)
			return (i);
		i++;
	}
	return (i);
}

int main()
{
	printf("%.2f", hypo_calculator(8, 15));
}
