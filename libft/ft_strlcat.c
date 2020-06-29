/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:50:42 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/12 18:42:24 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copies and concatenates strings with the same input parameters and output
** result as snprintf(3). designed to be a safer, more consistent, and less
** error prone replacement for the easily misused functions strncpy(3) and
** strncat(3). strlcpy() and strlcat() take the full size of the destination
** buffer and guarantee NUL-termination if there is room.  Note that room for
** the NUL should be included in “dstsize”. strlcpy() copies up to “dstsize”
** - 1 characters from the string “src” to “dst”, NUL-terminating the result
** if dstsize is not 0. strlcat() appends string src to the end of dst. It will
** append at most “dstsize” - strlen(dst) - 1 characters. It will then
** NUL-terminate, unless “dstsize” is 0 or the original “dst” string was longer
** than “dstsize” (in practice this should not happen as it means that either
** “dstsize” is incorrect or that “dst” is not a proper string). If the “src”
** and “dst” strings overlap, the behavior is undefined. Uses ft_strlen and
** ft_memcpy.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	int				j;
	int				res;

	i = 0;
	j = 0;
	res = 0;
	while (dst[i] != '\0')
		i++;
	while (src[res] != '\0')
		res++;
	if (dstsize <= i)
		res = res + dstsize;
	else
		res = res + i;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
