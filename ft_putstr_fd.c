/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_putstr_fd.c                                 .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:43:39 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:43:40 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int	main(void)
{
	char s[] = "Hello world";

	ft_putstr_fd(s, 1);
}*/
