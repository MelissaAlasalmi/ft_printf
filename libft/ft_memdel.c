/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:27:12 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:25:56 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** takes as a parameter the address of a memory area that needs to be freed
** with free(3), then puts the pointer to NULL.
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
