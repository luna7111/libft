/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:37:55 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/10 16:09:25 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*casted_string1;
	unsigned char	*casted_string2;

	casted_string1 = (unsigned char *)s1;
	casted_string2 = (unsigned char *)s2;
	while (n)
	{
		if (*casted_string1 != *casted_string2)
			return (*casted_string1 - *casted_string2);
		casted_string1 ++;
		casted_string2 ++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "t\200";
	char s2[] = "t\0";
	printf("%d\n", '\200');
	printf("Original: %d\nFt: %d\n\n", memcmp(s1, s2, 6), ft_memcmp(s1, s2, 6));
}*/
