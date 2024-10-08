/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:09:46 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/08 11:47:13 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*casted_array1;
	unsigned char	*casted_array2;

	casted_array1 = (unsigned char *)s1;
	casted_array2 = (unsigned char *)s2;
	while (*casted_array1 && *casted_array1 == *casted_array2 && n--)
	{
		casted_array1++;
		casted_array2++;
	}
	if (n > 0)
		return (*casted_array1 - *casted_array2);
	return (0);
}
/*
int	main(void)
{
	char s1[] = "1234567890";
	char s2[] = "1bcdefghij";

	printf("ft: %d\n", ft_strncmp(s1, s2, 32));
	printf("original: %d\n", strncmp(s1, s2, 32));
}*/
