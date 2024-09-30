/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:08:44 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/30 12:07:53 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*match;

	match = (char *)s;
	while (*match)
	{
		if (*match == c)
			return(match);
		match ++;
	}
	if (c = '\0')
		return (match);
	return (NULL);
}
/*
int	main(void)
{
	char s[] = "Hello world";
	if (ft_strchr(s, 'a'))
		printf("encontrado\n");
	else
		printf("no encontrado\n");
	printf("%s", ft_strchr(s, 'a'));
}*/
