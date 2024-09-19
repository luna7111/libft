/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:03:19 by ldel-val          #+#    #+#             */
/*   Updated: 2024/09/19 17:08:08 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

///////////////////////////////////////////////////////////////////

void t_isalpha(void)
{
	int i = 0;

	while (i < 128)
	{
		printf("isalpha Original: %d ft: %d\n", isalpha(i), ft_isalpha(i));
		i++;
	}
}

void t_isdigit(void)
{
	int i = 0;

	while (i < 128)
	{
		printf("isdigit Original: %d ft: %d\n", isdigit(i), ft_isdigit(i));
		i++;
	}
}

void t_isalnum(void)
{
	int i = 0;

	while (i < 128)
	{
		printf("isalnum Original: %d ft: %d\n", isalnum(i), ft_isalnum(i));
		i++;
	}
}

void t_isascii(void)
{
	int i = 0;

	while (i < 128)
	{
		printf("isascii Original: %d ft: %d\n", isascii(i), ft_isascii(i));
		i++;
	}
}

void t_isprint(void)
{
	int i = 0;

	while (i < 128)
	{
		printf("isprint Original: %d ft: %d\n", isprint(i), ft_isprint(i));
		i++;
	}
}


///////////////////////////////////////////////////////////////////

void t_strlen(void)
{
	printf("strlen Original: %ld ft: %ld\n", strlen(""), ft_strlen(""));
	printf("strlen Original: %ld ft: %ld\n", strlen("hello world"), ft_strlen("hello world"));
	printf("strlen Original: %ld ft: %ld\n", strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"), ft_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));
	printf("strlen Original: %ld ft: %ld\n", strlen("^^^;;;::$$%#\n	"), ft_strlen("^^^;;;::$$%#\n	"));
}

void t_memset(void)
{
	char test0[] = "Hola mundo, como estais?";
	char test1[] = "Hola mundo, como estais?";

	printf("memset Original: %s\n", memset(test0, 'r', 5), ft_memset(test1, 'r', 5));
	
	char test2[] = "Hola mundo, como estais?";
	char test3[] = "Hola mundo, como estais?";

	printf("memset Original: %s ft: %s\n", memset(test0, '@', 24), ft_memset(test1, '@', 24));

	char test4 = "Hola mundo, como estais?";
	char test5 = "Hola mundo, como estais?";

	printf("memset Original: %s ft:%s\n", memset(test0, 'w', 0), ft_memset(test1, 'w', 0));
}

int main(void)
{
	t_isalpha();
	t_isdigit();
	t_isalnum();
	t_isascii();
	t_isprint();
	////////////
	t_strlen();
	////////////
	t_memset();
}
