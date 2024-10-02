/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:43:20 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/02 12:28:40 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	string1_len;
	size_t	string2_len;
	size_t	i;

	string1_len = ft_strlen(s1);
	string2_len = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (string1_len + string2_len + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (i < string1_len)
	{
		s[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < string2_len)
	{
		s[string1_len + i] = s2[i];
		i++;
	}
	s[string1_len + string2_len + 1] = '\0';
	return (s);
}
/*
int	main(void)
{
	char s1[] = "Hello ";
	char s2[] = "world!";

	printf("%s", ft_strjoin(s1, s2));
}*/
