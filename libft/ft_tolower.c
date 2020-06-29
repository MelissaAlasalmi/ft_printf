/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 20:10:39 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:29:25 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** converts an upper-case letter to the corresponding lower-case letter.
** The argument must be representable as an unsigned char or the value of EOF.
** If the argument is an upper-case letter, the tolower() function returns the
** corresponding lower-case letter if there is one; otherwise, the argument is
** returned unchanged.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	return (c);
}
