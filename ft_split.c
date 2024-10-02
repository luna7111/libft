/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:39:55 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/02 15:13:25 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t word_count;

	word_count = 0;
	while (*s)
	{
		if (*s != c && (s[1] == c || s[1] == '\0'))
			word_count++;
		s ++;
		printf("%ld\n", word_count);
	}
	return (word_count);
}

static char	*ft_get_word(char const *s, char c, size_t n)
{
	char	*casted_string;
	char	*word;
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
	while (casted_string[word_len] != c && casted_string[word_len] != '\0')
		word_len ++;
	word = malloc(size_of(char) * (word_len + 1));
	return ();
}

char	**ft_split(char const *s, char c)
{
	return (NULL);
}

int		main(void)
{
	char s[] = "   Lorem     ipsum dolor sit amet, consectetur  ";
	size_t word_number = 9;

	printf("Word count: %ld\n", ft_count_words(s, ' '));
	printf("%ldth word: %s\n", word_number, ft_get_word(s, ' ', word_number));
}
