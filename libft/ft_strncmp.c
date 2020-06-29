/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:54:37 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/10 17:46:57 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** lexicographically compares the null-terminated strings “s1” and “s2”, but
** not more than “n” characters. Because strncmp() is designed for comparing
** strings rather than binary data, characters that appear after a `\0'
** character are not compared. Returns an integer greater than, equal to, or
** less than 0, according as the string “s1” is greater than, equal to, or
** less than the string “s2”. The comparison is done using unsigned characters,
** so that `\200' is greater than `\0'.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
