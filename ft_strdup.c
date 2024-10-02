/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:12:03 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/02 12:26:59 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*duplicated_string;

	duplicated_string = (char *)malloc(sizeof(char) * ft_strlen(s));
	ft_strlcpy(duplicated_string, s, ft_strlen(s));
	return (duplicated_string);
}
/*
int	main(void)
{
	char s[] = "ahora que no nos oye paolo, viva la pizza con piña";

	printf("ft: %s\nOriginal: %s\n", ft_strdup(s), strdup(s));
}
*/
