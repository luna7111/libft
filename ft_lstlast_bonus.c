/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_lstlast_bonus.c                             .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:41:46 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:41:48 by ldel-val          ``                     */
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
