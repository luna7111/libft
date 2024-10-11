/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:34:22 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/05 11:50:53 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i ++;
	}
}
/*
void	ft_toupper2(unsigned int index, char *c)
{
	(void)index;
	*c = ft_toupper(*c);
}

int	main(void)
{
	char s[] = "Hello world";
	ft_striteri(s, ft_toupper2);
	printf("%s",s);
}*/
