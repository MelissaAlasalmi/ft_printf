/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:37:00 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:24:02 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tests for an ASCII character, which is any character between 0 and octal
** 0177 inclusive.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	else
		return (0);
}
