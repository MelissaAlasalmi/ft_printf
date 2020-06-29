/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:51:55 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:26:22 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** outputs the string “s” to the standard output followed by a ’\n’. Uses
** ft_putstr.
*/

#include "libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	write(1, "\n", 1);
}
