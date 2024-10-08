/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:27:15 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/08 12:33:20 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*allocated_memory;
	size_t	i;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	i = size * nmemb;
	allocated_memory = (char *)malloc(nmemb * size);
	if (!allocated_memory)
		return (NULL);
	while (i-- > 0)
		allocated_memory[i] = '\0';
	return (allocated_memory);
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
