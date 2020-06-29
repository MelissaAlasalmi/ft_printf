/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:30:03 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:36:34 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** appends a copy of the null-terminated string “s2”, but not more than “n”
** characters from “s2”, to the end of the null-terminated string “s1”, then
** adds a terminating `\0'.  The string “s1” must have sufficient space to
** hold the result. The source and destination strings should not overlap, as
** the behavior is undefined. Returns the pointer “s1”. Uses ft_strlen,
** ft_strcpy, and ft_strncpy.
*/

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	len1;
	unsigned int	len2;
	int				i;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len2 < n)
		ft_strcpy(&s1[len1], s2);
	else
	{
		ft_strncpy(&s1[len1], s2, n);
		s1[len1 + n] = '\0';
	}
	return (s1);
}
