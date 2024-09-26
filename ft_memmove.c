/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:51:46 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/26 11:27:04 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (dest >= src)
	{
		while (n)
		{
			((char *)dest)[n] = ((char *)src)[n];
			n --;
		}
	}
	else
	{
		i = 0;
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

	char dest[] = "viva la vida";
	char src[] = "me voy a la luna";
	size_t n = 5;

	printf("resultado mia:      %s\n", (char*)ft_memmove(dest, src, n));
	printf("resultado original: %s\n", (char*)memmove(dest, src, n));
	return (1);
}
*/
