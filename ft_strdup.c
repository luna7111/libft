/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:12:03 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/25 18:54:23 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = (char *)malloc(sizeof(char) * ft_strlen(s));
	ft_strlcpy(dup, s, ft_strlen(s));
	return ((char *)s);
}
/*
int	main(void)
{
	char s[] = "ahora que no nos oye paolo, viva la pizza con piña";

	printf("ft: %s\nOriginal: %s\n", ft_strdup(s), strdup(s));
}
*/
