/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:09:46 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/26 11:29:09 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s1 == *s2 && n--)
	{
		s1++;
		s2++;
	}
	if (n > 0)
		return (*s1 - *s2);
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
