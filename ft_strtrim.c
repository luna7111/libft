/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:02:30 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/03 11:12:20 by luna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*s;
	unsigned int	start;
	size_t			end;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	s = ft_substr(s1, start, end - start + 1);
	printf("%s", s);
	return (s);
}
/*
int	main(void)
{
	char s1[] = "acabdcbbbacdcacaccdabdcbtestadaadadabcdabcdabcbbcadadadadada";
	char set[] = "abcd";
	ft_strtrim(s1, set);
}
*/
