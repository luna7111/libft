/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_toupper.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:48:02 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:48:04 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	printf("%c", ft_toupper('a'));
}*/
