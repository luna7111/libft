/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_tolower.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:48:11 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:48:12 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int main(void)
{
	int c;
	
	c = 0;
	while (c < 128)
	{
		printf("letra: %c, mayúscula: %c\n", c, ft_tolower(c));
		c++;
	}
}*/
