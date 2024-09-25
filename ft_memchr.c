/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:42:54 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/25 18:48:01 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*match;

	match = (char *)s;
	while (n--)
		if (*match++ == c)
			return (match - 1);
	return (0);
}
/*
int	main(void)
{
	char s[] = "Hello world";
	char c = '\0';

	printf("ft: %s\noriginal: %s", (char *)ft_memchr(s, c, 11),
		(char *)memchr(s, c, 11));
}
*/
