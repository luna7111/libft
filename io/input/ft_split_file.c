/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_split_file.c                                .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/04 11:09:45 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/04 11:20:35 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	**split_file(int fd)
{
	char *raw_file;
	char **split_file;

	raw_file = get_whole_file(fd);
	split_file = ft_split(raw_file, '\n');
	free(raw_file);
	return (split_file);
}
