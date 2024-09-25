/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:35:41 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/25 19:00:33 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t match_i;
	
	if (*little == '\0')
		return	((char *)big);
	while (len)
	{
		match_i = 0;
		while (big[match_i] && big[match_i] == little[match_i])
			match_i ++;
		if (little[match_i] == '\0')
			return((char *)big);
		big ++;
		len --;
	}
	return (0);
}

int	main(void)
{
	char big[] = "Hello world";
	char little[] = "world";

	printf("Original: %s\n ft: %s", strnstr(big, little, 8), ft_strnstr(big, little, 8));
}
