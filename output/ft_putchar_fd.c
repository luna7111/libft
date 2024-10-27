/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_putchar_fd.c                                .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:43:14 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:55:27 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}