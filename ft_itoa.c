/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:51:21 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/28 18:14:55 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_get_size(int n)
{
	int	has_sign;
	int	digits;

	has_sign = 0;
	digits = 0;
	if (n < 0)
	{
		has_sign = 1;
		n *= -1;
	}
	while (n)
	{
		digits ++;
		n /= 10;
	}
	return (digits + has_sign);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		size;
	
	size = ft_get_size(n);
	s = (char *)malloc(sizeof(char) * (size + 1));
	if (!s)
		return(NULL);
	s[size] = '\0';
	if (n == 0)
		*s = '0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (n)
	{
		s[size - 1] = (n % 10) + 48;
		n /= 10;
		size --;
	}
	return(s);
}

int main(void)
{
	printf("%s", ft_itoa(-2147483647));
}
