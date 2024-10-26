/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_memchr.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:42:19 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:42:33 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*match;

	match = (unsigned char *)s;
	while (n--)
		if (*match++ == (unsigned char)c)
			return (match - 1);
	return (NULL);
}
/*
int	main(void)
{
	char s[] = "Hello world";
	char c = '\0';

	printf("ft: %s\noriginal: %s", (char *)ft_memchr(s, c, 11),
		(char *)memchr(s, c, 11));
}
*/
