/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_lstnew_bonus.c                              .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:42:03 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:42:04 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*int	main(void)
{
	char	s[] = "Hello world!";

	t_list *node;
	node = ft_lstnew(s);
	printf("%s\n", (char *)node->content);
	printf("%p\n", node->next);
}*/
