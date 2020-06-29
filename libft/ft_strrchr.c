/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:59:05 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:36:46 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** is identical to strchr, except it locates the last occurrence of “c”.
** Returns a pointer to the located character, or NULL if the character does
** not appear in the string. Uses ft_strlen.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = (char *)s + ft_strlen(s);
	while (*str != c)
	{
		if (str == s)
			return (NULL);
		str--;
	}
	return (str);
}
