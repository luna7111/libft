/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:35:41 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/07 17:05:49 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*s;
	size_t	little_len;

	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	s = (char *)big;
	while (*s && len >= little_len)
	{
		if (ft_strncmp(s, little, little_len) == 0)
			return ((char *)s);
		s++;
		len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char big[] = "Hello world";
	char little[] = "world";
	size_t len = 10;
	printf("Original: %s\n ft: %s", ft_strnstr(big, little, len),
		ft_strnstr(big, little, len));
}*/
