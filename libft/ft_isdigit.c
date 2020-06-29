/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:11:56 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:24:07 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tests for a decimal digit character. Regardless of locale, this includes
** the following characters only: 0123456789. The isnumber() function behaves
** similarly to isdigit(), but may recognize additional characters, depending
** on the current locale setting. The value of the argument must be
** representable as an unsigned char or the value of EOF. Returns zero if the
** character tests false and return non-zero if the character tests true.
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
