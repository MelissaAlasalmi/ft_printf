/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:19:29 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/10 17:52:26 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** returns the number of bytes in the string pointed to by “s”, excluding the
** terminating null bye ('\0'), but at most “maxlen.” Returns either the same
** result as strlen() or maxlen, whichever is smaller.
*/

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (len < maxlen && s[i])
	{
		len = i + 1;
		i++;
	}
	return (len);
}
