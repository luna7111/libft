/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:58:43 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/10 19:48:30 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen > size)
		return (srclen + size);
	dst += dstlen;
	size -= dstlen;
	while (size-- > 1 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (srclen + dstlen);
}
/*
int main(void)
{
	char dest[50] = "Hola manola ";
	char ft_dest[50] = "Hola manola ";
	char src[] = "caracola";

	printf("Original: %ld texto: %s\n", strlcat(dest, src, 11), dest);
	printf("ft: %ld texto: %s", ft_strlcat(ft_dest, src, 11), ft_dest);
}*/
