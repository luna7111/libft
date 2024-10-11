/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:02:30 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/10 19:14:48 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start ++;
	end = ft_strlen(s1) - 1;
	while (end && ft_strchr(set, s1[end]))
		end --;
	if (end < start)
		return (ft_calloc(1, sizeof(char)));
	return (ft_substr(s1, start, end - start + 1));
}
/*
int	main(void)
{
	char s1[] = "acabdcbbbacdcacaccdabdcbdatadadabcdabcdabcbbcadadadadada";
	char set[] = "abcd";
	printf("%s\n", ft_strtrim(s1, set));
}*/
