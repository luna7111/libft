/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:16:10 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/02 12:11:21 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	number;
	int	sign;

	sign = 1;
	number = 0;
	while (*nptr <= ' ' && *nptr >= '\t')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr ++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		number *= 10;
		number += *nptr - 48;
		nptr++;
	}
	return (number * sign);
}
/*
int main(void)
{
	char s[] = "++0 00";

	printf("Original: %d\nft: %d", atoi(s), ft_atoi(s));
}
*/
