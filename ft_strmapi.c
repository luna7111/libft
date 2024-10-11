/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#P#+#+#+   +#+           */
/*   Created: 2024/10/04 19:03:28 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/05 10:35:46 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	result = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i ++;
	}
	return (result);
}
/*
char	ft_toupper2(unsigned int index, char c)
{
	(void)index;
	return (ft_toupper(c));
}

int main(void)
{
	char str[] = "hola twitter soy mapi";

	printf("%s", ft_strmapi(str, ft_toupper2));
}*/
