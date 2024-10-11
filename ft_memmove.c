/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:51:46 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/10 19:46:42 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (n == 0)
		return (dest);
	if (dest < src)
	{
		i = 0;
		while (n--)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i ++;
		}
	}
	else if (dest > src)
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	return (dest);
}
/*
int main (void)
{
	char src[] = "Lorem ipsum dolor sit amet";
	char src2[] = "Lorem ipsum dolor sit amet";
	char *dest;
	char *dest2;

	dest = src + 1;
	dest2 = src2 + 1;
	printf("Ft: %s\n", (char *)ft_memmove(src, dest, 8));
	printf("Or: %s\n", (char *)memmove(src, dest, 8));
	return (1);
}*/
