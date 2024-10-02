/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:37:55 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/02 12:19:51 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*casted_string1;
	char	*casted_string2;

	casted_string1 = (char *)s1;
	casted_string2 = (char *)s2;
	while (n)
	{
		if (*casted_string1 != *casted_string2)
			return (*casted_string1 - *casted_string2);
		n--;
	}
	return (0);
}
