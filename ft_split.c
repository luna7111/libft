/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:39:55 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/05 13:00:28 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	word_count;

	word_count = 0;
	while (*s)
	{
		if (*s != c && (s[1] == c || s[1] == '\0'))
			word_count++;
		s ++;
	}
	return (word_count);
}

static char	*ft_get_word(char const *s, char c, size_t n)
{
	char	*casted_string;
	size_t	current_word;
	size_t	word_len;

	current_word = 0;
	casted_string = (char *)s;
	if (*casted_string != c)
		current_word = 1;
	while (*casted_string && current_word < n)
	{
		if (*casted_string == c && casted_string[1] != c)
			current_word ++;
		casted_string ++;
	}
	word_len = 0;
	while (casted_string[word_len] != c && casted_string[word_len] != '\0')
		word_len ++;
	return (ft_substr(casted_string, 0, word_len));
}

char	**ft_split(char const *s, char c)
{
	long	word_count;
	long	i;
	char	**split;
	char	*current_word;

	word_count = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i <= word_count)
	{
		current_word = ft_get_word(s, c, i + 1);
		if (!current_word)
		{
			while (--i >= 0)
				free(split[i]);
			free(split);
			return (NULL);
		}
		split[i] = current_word;
		i++;
	}
	return (split);
}
/*
int	main(void)
{
	char	s[] = "The Cake is a Lie The Cake is a Lie";
	char	c = ' ';
	char	**split;

	split = ft_split(s, c);
	while (**split)
	{
		printf("%s\n", *split);
		split ++;
	}
}*/
