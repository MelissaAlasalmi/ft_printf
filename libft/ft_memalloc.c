/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:26:18 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/11 15:12:42 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** allocates (with malloc(3)) and returns a “fresh” memory area. The memory
** allocated is initialized to 0. Returns the allocated memory area. If the
** allocation fails, the function returns NULL. Uses ft_bzero.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *buf;

	if (!(buf = (void *)malloc(size)))
		return (NULL);
	if (buf)
	{
		ft_bzero(buf, size);
		return (buf);
	}
	return (NULL);
}
