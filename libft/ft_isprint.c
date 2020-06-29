/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:52:24 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:24:12 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tests for any printing character, including space (` ').  The value of the
** argument must be representable as an unsigned char or the value of EOF. In
** the ASCII character set, this includes characters preceded by their numeric
** values, in octal. Returns zero if the character tests false and returns
** non-zero if the character tests true.
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
