/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:37:29 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/11 15:21:06 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** allocates (with malloc(3)) and returns a “fresh” substring from the string
** given as argument. The substring begins at index “start” and is of size
** “len”. If “start” and “len” aren’t referring to a valid substring, the
** behavior is undefined. Returns the value of the substring. If the allocation
** fails, the function returns NULL. Uses ft_strlen.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if (res == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
