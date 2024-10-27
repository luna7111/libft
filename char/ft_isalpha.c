/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_isalpha.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:40:13 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/26 15:40:14 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}