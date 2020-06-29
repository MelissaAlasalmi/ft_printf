/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:57:21 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:28:46 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** locates the first occurrence of the null-terminated string “needle” in the
** string “haystack”, where not more than “len” characters are searched.
** Characters that appear after a `\0' character are not searched. It should
** only be used when portability is not a concern. If “needle” is an empty
** string, “haystack” is returned; if “needle” occurs nowhere in “haystack”,
** NULL is returned; otherwise a pointer to the first character of the first
** occurrence of “needle” is returned. Uses ft_strlen and ft_memcmp.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t newlen;

	if (*needle == '\0')
		return ((char *)haystack);
	newlen = ft_strlen(needle);
	while (*haystack != '\0' && len >= newlen)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, newlen) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
