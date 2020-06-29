/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:12:57 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:25:23 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copies “n” bytes from memory area “src” to memory area “dst”.  If “dst” and
** “src” overlap, behavior is undefined. Returns the original value of “dst”.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}
