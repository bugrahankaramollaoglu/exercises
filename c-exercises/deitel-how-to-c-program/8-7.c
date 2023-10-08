/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8-6.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaramol <bkaramol@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:06:41 by bkaramol          #+#    #+#             */
/*   Updated: 2023/01/16 11:10:23 by bkaramol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
	printf("enter 3 nums: \n");
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	int sum = num1+num2+num3;
	printf("sum: %d\n", sum);
	printf("average: %d\n", sum/3);
}

