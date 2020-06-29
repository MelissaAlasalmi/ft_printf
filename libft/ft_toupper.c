/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 20:03:02 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:29:31 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** converts a lower-case letter to the corresponding upper-case letter. The
** argument must be representable as an unsigned char or the value of EOF. If
** the argument is a lower-case letter, the toupper() function returns the
** corresponding upper-case letter if there is one; otherwise, the argument
** is returned unchanged.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	return (c);
}
