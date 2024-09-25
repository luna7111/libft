/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:16:10 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/25 18:43:53 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int	sign;

	sign = 1;
	n = 0;
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
		n *= 10;
		n += *nptr - 48;
		nptr++;
	}
	return (n);
}
/*
int main(void)
{
	char s[] = "++0 00";

	printf("Original: %d\nft: %d", atoi(s), ft_atoi(s));
}
*/
