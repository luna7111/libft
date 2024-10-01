/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:37:55 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/01 16:48:56 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s1_cast;
	char	*s2_cast;

	s1_cast = (char *)s1;
	s2_cast = (char *)s2;
	while (n)
	{
		if (*s1_cast != *s2_cast)
			return (*s1_cast - *s2_cast);
		n--;
	}
	return (0);
}
