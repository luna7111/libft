/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:02:40 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/20 11:47:28 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>


size_t	 ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (i + 1 < size)
	{
		dst[i] = src[i];
		i ++;
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main(void)
{
	char dst[] = "me gusta el pastel de piña";
	char ft_dst[] = "me gusta el pastel de piña";
	char src[] = "me gusta la pizza con peperoni";

	printf("Original: return: %ld text: %s\n", strlcpy(dst, src, 0), dst);	
	printf("ft: return: %ld text: %s\n", ft_strlcpy(ft_dst, src, 0), ft_dst);	
	return (0);
}
*/
