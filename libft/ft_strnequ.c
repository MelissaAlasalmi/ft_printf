/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:36:56 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/12 18:23:48 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** lexicographical comparison between “s1” and “s2” up to “n” characters or
** until a ’\0’ is reached. If the 2 strings are identical, the function
** returns 1, or 0 otherwise. Uses ft_strncmp.
*/

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = ft_strncmp(s1, s2, n);
	if (i == 0)
		return (1);
	else
		return (0);
}
