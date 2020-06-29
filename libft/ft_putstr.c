/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:23:16 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 00:17:01 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** outputs the string “s” to the standard output. Uses ft_putchar.
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	if (s)
		while (s[i] != '\0')
		{
			ft_putchar(s[i]);
			i++;
		}
}
