/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_itoa.c                                      .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:40:54 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:53:35 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_get_size(int n)
{
	int	has_sign;
	int	digit_number;

	has_sign = 0;
	digit_number = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		has_sign = 1;
		n *= -1;
	}
	while (n)
	{
		digit_number ++;
		n /= 10;
	}
	return (digit_number + has_sign);
}

char	*ft_itoa(int n)
{
	char	*allocated_memory;
	int		size;

	size = ft_get_size(n);
	allocated_memory = (char *)malloc(sizeof(char) * (size + 1));
	if (!allocated_memory)
		return (NULL);
	if (n == -2147483648)
		return (ft_memcpy(allocated_memory, "-2147483648", 12));
	allocated_memory[size] = '\0';
	if (n == 0)
		*allocated_memory = '0';
	if (n < 0)
	{
		allocated_memory[0] = '-';
		n *= -1;
	}
	while (n)
	{
		allocated_memory[size - 1] = (n % 10) + '0';
		n /= 10;
		size --;
	}
	return (allocated_memory);
}
