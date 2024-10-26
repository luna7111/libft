/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_memset.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:43:04 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:43:05 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int main(void)
{

	char test[] = "hola mundo";

	printf("%s", (char *)ft_memset(test, 'r', 5));
}*/
