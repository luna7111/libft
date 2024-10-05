/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:51:46 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/05 13:51:50 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest >= src)
	{
		while (i <= n)
		{
			((char *)dest)[n - i] = ((char *)src)[n - i];
			i ++;
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i ++;
		}
	}
	return (dest);
}
/*
int main (void)
{

	char src[] = "Lorem ipsum dolor sit amet";
	char *dest;

	dest = src + 1;
	size_t n = 5;
	printf("Ft: %s\n", (char *)ft_memmove(dest, "consectetur", n));
	printf("Or: %s\n", (char *)memmove(dest, "consectetur", n));
	return (1);
}*/
