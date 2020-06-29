/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:32:28 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:25:06 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copies bytes from string “src” to string “dst”. If the character “c”
** (as converted to an unsigned char) occurs in the string “src”, the copy
** stops and a pointer to the byte after the copy of “c” in the string “dst”
** is returned.  Otherwise, “n” bytes are copied, and a NULL pointer is
** returned.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			len;

	if (n == 0)
		return (NULL);
	if (dst == src)
		return (dst);
	len = 0;
	c1 = (unsigned char*)dst;
	c2 = (unsigned char*)src;
	while (len < n)
	{
		c1[len] = c2[len];
		if (c1[len] == (unsigned char)c)
			return (c1 + len + 1);
		len++;
	}
	return (NULL);
}
