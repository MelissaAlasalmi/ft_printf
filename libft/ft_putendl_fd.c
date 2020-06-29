/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:54:53 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:26:19 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** outputs the string “s” to the file descriptor “fd” followed by a ’\n’. Uses
** ft_putstr_fd.
*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
