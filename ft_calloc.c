/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:27:15 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/25 18:45:26 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;
	size_t	i;

	if (nmemb == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	i = size * nmemb;
	s = (char *)malloc(nmemb * size);
	if (!s)
		return (NULL);
	while (i-- > 0)
		s[i] = '\0';
	return (s);
}
/*
int	main(void)
{
	printf("ft: %p\n", ft_calloc(39999, 400));
	printf("original: %p\n", calloc(39999, 400));

	char *ptr = ft_calloc(10, sizeof(char));
	if (ptr == NULL)
		return (1);
	ft_strlcpy(ptr, "Hello world", 12);
	printf("%s\n", ptr);
	free(ptr);
}
*/
