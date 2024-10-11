/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:16:16 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/09 18:30:19 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		node_number;

	node_number = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		node_number ++;
		lst = lst->next;
	}
	return (node_number);
}
/*
int	main(void)
{
	t_list	*head;
	int		content;

	content = 42;
	head = ft_lstnew(&content);
	head->next = ft_lstnew(&content);
	head->next->next = ft_lstnew(&content);
	head->next->next->next = ft_lstnew(&content);
	printf("%d", ft_lstsize(head));
}
*/
