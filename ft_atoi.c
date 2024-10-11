/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:16:10 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/10 16:30:10 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	number;
	int	sign;

	sign = 1;
	number = 0;
	while (*nptr == ' ' || (*nptr <= '\r' && *nptr >= '\t'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr ++;
	}
	while (ft_isdigit(*nptr))
	{
		number *= 10;
		number += *nptr - '0';
		nptr++;
	}
	return (number * sign);
}
/*
int main(void)
{
	char s[] = "\e475";

	printf("Original: %d\nft: %d", atoi("-2147483648"), ft_atoi("-2147483648"));
}*/
