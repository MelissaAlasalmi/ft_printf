/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:26:15 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:23:53 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tests for any character for which isalpha(3) or isdigit(3) is true. The
** value of the argument must be representable as an unsigned char or the value
** of EOF. In the ASCII character set, this characters preceded by their numeric
** values, in octal. Returns zero if the character tests false and returns
** non-zero if the character tests true.
*/

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
