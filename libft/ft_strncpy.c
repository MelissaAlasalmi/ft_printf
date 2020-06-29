/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:10:39 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:28:22 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copies at most “len” characters from “src” into “dst”.  If “src” is less
** than “len” characters long, the remainder of “dst” is filled with `\0'
** characters. Otherwise, “dst” is not terminated. Returns “dst”. Uses
** ft_memset and ft_memcpy.
*/

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
