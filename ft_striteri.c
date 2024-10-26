/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_striteri.c                                  .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:44:14 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:44:15 by ldel-val          ``                     */
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
