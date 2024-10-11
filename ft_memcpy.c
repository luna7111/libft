/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:38:22 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/10 19:46:35 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n)
	{
		((char *)dest)[n - 1] = ((char *)src)[n - 1];
		n--;
	}
	return (dest);
}
/*
int main (void)
{

	char dest[] = "viva la vida";
	char src[] = "me voy a la luna";
	size_t n = 999;

	printf("resultado original: %s\n", (char*)memcpy(dest, src, n));
//	printf("resultado mia:      %s\n", (char*)ft_memcpy(dest, src, n));
	return (0);
}*/
