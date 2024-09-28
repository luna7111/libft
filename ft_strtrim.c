/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:56:25 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/28 20:01:28 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	find_end(char const *s1, char const *set)
{
	size_t	set_i;
	size_t	end;

	end = ft_strlen(s1);
	set_i = 0;
	while (set[set_i])
	{
		if (s1[end - 1] == set[set_i])
		{
			end --;
			set_i = 0;
		}
		else
			set_i ++;
	}
	return (end);
}

static	size_t	find_start(char const *s1, char const *set)
{
	size_t	set_i;
	size_t	start;

	set_i = 0;
	start = 0;
	while (set[set_i])
	{
		if (s1[start] == set[set_i])
		{
		start ++;
		set_i = 0;
		}
		else
			set_i ++;
	}
	return (start);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*s;

	start = find_start(s1, set);
	end = find_end(s1, set);
	s = (char *)malloc(sizeof(char) * (end - start));
	if (!s)
		return (NULL);
	i = 0;
	while (i < end)
	{
		s[i] = s1[i - start];
		i ++;
	}
	printf("Start: %ld End: %ld\n", start, end);
	return (s);
}

int	main(void)
{
	char s1[] = "abcdaabbccddababatestadadadabababbbaaacadacabacddabcac";
	char set[] = "abcd";

	printf("%s", ft_strtrim(s1, set));
}
