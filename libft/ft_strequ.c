/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:35:28 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/12 18:25:17 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** lexicographical comparison between “s1” and “s2”. If the 2 strings are
** identical the function returns 1, or 0 otherwise. Uses ft_strcmp.
*/

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = ft_strcmp(s1, s2);
	if (i == 0)
		return (1);
	else
		return (0);
}
