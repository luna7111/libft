/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:37:18 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/09 19:30:09 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main(void)
{
	t_list *head;
	int content1;
	int content2;
	int content3;

	content1 = 42;
	content2 = 12;
	content3 = 33;
	head = (t_list *)malloc(sizeof(t_list));
	head->content = &content1;
	head->next = (t_list *)malloc(sizeof(t_list));
	head->next->content = &content2;
	head->next->next = (t_list *)malloc(sizeof(t_list));
	head->next->next->content = &content3;
	head->next->next->next = NULL;
	t_list *new_node;
	
	new_node = (t_list *)malloc(sizeof(t_list));
	ft_lstadd_front(head, new_node);
}*/
