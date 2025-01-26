/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_dprintf.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:10:53 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/01/26 19:00:40 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_dprint_specifier(int fd, char const *format, va_list arguments)
{
	if (ft_strncmp("%c", format, 2) == 0)
		return (ft_putchar_fd(va_arg(arguments, int), fd));
	else if (ft_strncmp("%s", format, 2) == 0)
		return (ft_putstr_fd(va_arg(arguments, char *), fd));
	else if (ft_strncmp("%p", format, 2) == 0)
		return (ft_putptr_fd(va_arg(arguments, void *), fd));
	else if (ft_strncmp("%d", format, 2) == 0)
		return (ft_putnbr_fd(va_arg(arguments, int), fd));
	else if (ft_strncmp("%i", format, 2) == 0)
		return (ft_putnbr_fd(va_arg(arguments, int), fd));
	else if (ft_strncmp("%u", format, 2) == 0)
		return (ft_putunbr_fd(va_arg(arguments, unsigned int), fd));
	else if (ft_strncmp("%x", format, 2) == 0)
		return (ft_puthex_fd(va_arg(arguments, unsigned int), fd));
	else if (ft_strncmp("%X", format, 2) == 0)
		return (ft_putuphex_fd(va_arg(arguments, unsigned int), fd));
	else if (ft_strncmp("%%", format, 2) == 0)
		return (ft_putchar_fd('%', fd));
	else
	{
		ft_putchar_fd('%', fd);
		return (ft_putchar_fd(format[1], fd) + 1);
	}
}

int	ft_dprintf(int fd, char const *format, ...)
{
	va_list	arguments;
	int		bytes_printed;

	va_start(arguments, format);
	bytes_printed = 0;
	while (*format)
	{
		if (*format == '%')
		{
			if (format[1] == '\0')
				return (bytes_printed);
			bytes_printed += ft_dprint_specifier(fd, format, arguments);
			format += 2;
		}
		else
		{
			bytes_printed += ft_putchar_fd(*format, fd);
			format ++;
		}
	}
	va_end(arguments);
	return (bytes_printed);
}
