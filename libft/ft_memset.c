/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:43:44 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:26:06 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** writes “len” bytes of value “c” (converted to an unsigned char) to the
** string “b”. Returns its first argument.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;

	ptr = b;
	while (len > 0)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return (b);
}
