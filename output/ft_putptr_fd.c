/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_putptr_fd.c                                 .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.c     |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/28 16:10:57 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/28 18:02:56 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putptr_fd(void *ptr, int fd)
{
	int	printed_bytes;

	printed_bytes = write(fd, "0x", 2);
	printed_bytes += ft_puthex_fd((size_t)ptr, fd);
	return (printed_bytes);
}
