/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:31:21 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:26:10 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** outputs the char “c” to the file descriptor “fd”.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
