/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_strlcpy.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:49:19 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:49:20 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main(void)
{
	char dst[] = "Lorem ipsum dolor sit amet";
	char ft_dst[] = "Lorem ipsum dolor sit amet";
	char src[] = "Hello world";

	printf("Original: return: %ld text: %s\n", strlcpy(dst, src, 0), dst);	
	printf("ft: return: %ld text: %s\n", ft_strlcpy(ft_dst, src, 0), ft_dst);	
	return (0);
}*/
