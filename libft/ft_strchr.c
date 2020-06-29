/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:46:42 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:37:26 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** locates the first occurrence of “c” (converted to a char) in the string
** pointed to by “s”.  The terminating null character is considered to be
** part of the string; therefore if “c” is `\0', the function locates the
** terminating `\0'. Returns a pointer to the located character, or NULL if
** the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
