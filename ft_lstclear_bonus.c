/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:15:15 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/09 20:38:42 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buffer;

	if (lst && del)
	{
		while (*lst)
		{
			buffer = *lst;
			*lst = (*lst)->next;
			del(buffer->content);
			free(buffer);
		}
	}
}
