/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:08:46 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/05 11:51:25 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	digit_char;

	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n == INT_MIN)
	{
		write(fd, "2147483647", 11);
		return ;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	digit_char = (n % 10) + '0';
	write(fd, &digit_char, 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(INT_MIN, 1);
}*/
