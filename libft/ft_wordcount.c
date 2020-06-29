/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 17:12:22 by Melissa           #+#    #+#             */
/*   Updated: 2019/11/12 18:46:47 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** counts and returns the number of words in a string.
*/

#include "libft.h"

int		ft_wordcount(const char *s, char c)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	while (*s)
	{
		if (temp == 1 && *s == c)
			temp = 0;
		if (temp == 0 && *s != c)
		{
			temp = 1;
			i++;
		}
		s++;
	}
	return (i);
}
