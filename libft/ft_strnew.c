/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:27:57 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:28:32 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’.
** Each character of the string is initialized at ’\0’. If the allocation
** fails the function returns NULL. Returns the string allocated and
** initialized to 0. Uses ft_memalloc.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}
