/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:44:21 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/25 18:06:41 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>


int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);

//ORGANIZA ESTO PEDAZO DE SINVERGÜENZA
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
#endif
