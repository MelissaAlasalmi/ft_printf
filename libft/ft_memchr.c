/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:40:19 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:25:11 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** locates the first occurrence of “c” (converted to an unsigned char) in
** string “s”. Returns a pointer to the byte located, or NULL if no such byte
** exists within “n” bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	char nc;

	nc = c;
	str = (char*)s;
	while (n)
	{
		if (*str == nc)
			return (str);
		if (n)
			str++;
		n--;
	}
	return (NULL);
}
