/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:43:20 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/28 12:53:38 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		s[len1 + i] = s2[i];
		i++;
	}
	s[len1 + len2 + 1] = '\0';
	return (s);
}
/*
int	main(void)
{
	char s1[] = "Hello ";
	char s2[] = "world!";

	printf("%s", ft_strjoin(s1, s2));
}*/
