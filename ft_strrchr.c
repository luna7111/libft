/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:08:44 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/24 10:15:37 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
char	*ft_strrchr(const char *s, int c)
{
	char *match;

	match = (char *)s;
	match += ft_strlen(match);
	while (match >= s)
	{
		if (*match == c)
			return (match);
		match --;
	}
	return ("\0");
}

int	main(void)
{
	char s[] = "Hello world";

	printf("%s", ft_strrchr(s, 'o'));
}
