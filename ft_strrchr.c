/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:08:44 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/10 19:48:50 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*match;

	match = (unsigned char *)s;
	match += ft_strlen(s);
	while (match >= (unsigned char *)s)
	{
		if (*match == (unsigned char)c)
			return ((char *)match);
		match --;
	}
	return (NULL);
}
/*
int	main(void)
{
	char s[] = "Hello world";

	printf("Original: %s\nFt: %s\n",strrchr(s, '\0'), ft_strrchr(s, '\0'));
}*/
