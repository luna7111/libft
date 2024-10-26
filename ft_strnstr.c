/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_strnstr.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:48:47 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:48:50 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	while (*big && len >= little_len)
	{
		if (ft_strncmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char big[] = "Hello world";
	char little[] = "world";
	size_t len = 12;
	printf("Original: %s\n ft: %s", ft_strnstr(big, little, len),
		ft_strnstr(big, little, len));
}*/
