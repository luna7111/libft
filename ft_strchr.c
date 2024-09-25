/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:08:44 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/25 18:53:30 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*match;

	match = (char *)s;
	while (*match && *match != c)
		match ++;
	return (match);
}
/*
int	main(void)
{
	char s[] = "Hello world";

	printf("%s", ft_strchr(s, 'a'));
}
*/
