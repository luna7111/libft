/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:51:46 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/19 09:54:20 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;

	if (dest -  src)
		ft_memcopy(dest, src, n);
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[n] = ((char *)src)[n];
			n ++;
		}
	}
	return(dest);
}
