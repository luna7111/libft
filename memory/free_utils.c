/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   free_utils.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/01/12 13:10:23 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/01/12 13:25:55 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	free_strarray(char **array)
{
	int	i;

	if (array == NULL)
		return ;
	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
