/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:40:00 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:34:34 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** compares byte string “s1” against byte string “s2”.  Both strings are
** assumed to be “n” bytes long. Returns zero if the two strings are identical,
** otherwise returns the difference between the first two differing bytes
** (treated as unsigned char values, so that `\200' is greater than `\0', for
** example).  Zero-length strings are always identical.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str;
	const unsigned char	*str2;

	if (s1 == s2 || n == 0)
		return (0);
	str = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n)
	{
		if (*str != *str2)
			return (*str - *str2);
		if (n)
		{
			str++;
			str2++;
		}
		n--;
	}
	return (0);
}
