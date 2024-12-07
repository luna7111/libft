/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_split_file.c                                .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/12/04 11:09:45 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/12/07 19:09:29 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	**realloc_array(char **array, int size, int new_size)
{
	char	**new_array;

	new_array = malloc(new_size * sizeof(char *));
	if (!new_array)
		return (NULL);
	while (size)
	{
		new_array[size - 1] = array[size - 1];
		size --;
	}
	free(array);
	return (new_array);
}

char	**split_file(int fd)
{
	char	**split_file;
	int		line;

	split_file = malloc(sizeof(char *));
	if (!split_file)
		return (NULL);
	line = 0;
	split_file[0] = get_next_line(fd);
	while (split_file[line])
	{
		line ++;
		realloc_array(split_file, line, line + 1);
		split_file[line] = get_next_line(fd);
	}
	return (split_file);
}
