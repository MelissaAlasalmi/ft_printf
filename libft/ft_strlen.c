/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:19:29 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/12 18:42:35 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** calculates the length of the string s, excluding the terminating null byte.
** Returns the number of characters that precede the terminating NULL
** character.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		len = i + 1;
		i++;
	}
	return (len);
}
