/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:19:27 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:26:42 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** appends a copy of the null-terminated string “s2” to the end of the
** null-terminated string “s1”, then adds a terminating `\0'.  The string “s1”
** must have sufficient space to hold the result. The source and destination
** strings should not overlap, as the behavior is undefined. Returns the
** pointer “s1”. Uses ft_strlen and ft_strcpy.
*/

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int len;

	len = ft_strlen(s1);
	ft_strcpy(s1 + len, s2);
	return (s1);
}
