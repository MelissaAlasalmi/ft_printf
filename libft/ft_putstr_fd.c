/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:53:34 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 00:18:51 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** outputs the string “s” to the file descriptor “fd”. Uses ft_putchar_fd.
*/

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int i;

	i = 0;
	if (s)
		while (s[i] != '\0')
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
}
