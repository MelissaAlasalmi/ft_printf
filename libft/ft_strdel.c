/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:28:27 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:27:05 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** takes as a parameter the address of a string that need to be freed with
** free(3), then sets its pointer to NULL. Uses ft_memdel.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as)
		ft_memdel((void **)as);
}
