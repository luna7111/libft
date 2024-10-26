/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_strchr.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:43:56 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:43:57 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s ++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	char s[] = "Hello world";

	printf("Original: %s\nFt: %s\n", strchr(s, 'o'), ft_strchr(s, 'o'));
}*/
