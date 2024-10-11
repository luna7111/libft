/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldel-val <ldel-val@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:01:10 by ldel-val          #+#    #+#             */
/*   Updated: 2024/10/09 19:30:04 by ldel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*head;
    int		content1;
    int		content2;
    int		content3;

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
	
	printf("%d\n", *(int *)ft_lstlast(head)->content);
}*/
