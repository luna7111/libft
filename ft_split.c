/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:39:55 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/01 19:02:37 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t n;

	n = 0;
	while (*s)
	{
		if (*s != c && (s[1] == c || s[1] == '\0'))
			n++;
		s ++;
		printf("%ld\n", n);
	}
	return (n);
}

static char	*ft_get_wor

char	**ft_split(char const *s, char c)
{
	return (NULL);
}

int		main(void)
{
	char s[] = "   Lorem     ipsum dolor sit amet, consectetur  ";

	printf("%ld", ft_count_words(s, ' '));
}
