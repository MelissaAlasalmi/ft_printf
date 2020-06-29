/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:43:58 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:26:02 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copies “len” bytes from string “src” to string “dst”. The two strings may
** overlap; the copy is always done in a non-destructive manner. Returns the
** original value of “dst”.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	if (!src && !dst)
		return (NULL);
	if (d > s)
		while (len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
