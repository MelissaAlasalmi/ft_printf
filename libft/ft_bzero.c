/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:55:56 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/10 16:20:52 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** writes “n” zeroed bytes to the string “s”.  If “n” is zero, bzero() does
** nothing. Uses ft_memset.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
