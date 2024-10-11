/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:43:20 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/09 18:20:38 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	string1_len;
	size_t	string2_len;

	if (!s1 || !s2)
		return (NULL);
	string1_len = ft_strlen(s1);
	string2_len = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (string1_len + string2_len + 1));
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, string1_len + 1);
	ft_strlcat(s, s2, string1_len + string2_len + 1);
	return (s);
}
/*
int	main(void)
{
	char s1[] = "Hello ";
	char s2[] = "world!";

	printf("%s", ft_strjoin(s1, s2));
}*/
