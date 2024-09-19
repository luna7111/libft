/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:02:40 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/19 14:19:20 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	 ft_strlcpy(char *dst. const char *src, size_t size)
{
	while (size)
	{
		dst[size] = src[size];
		size--;
	}
	return (ft_strlen(dest));
}
