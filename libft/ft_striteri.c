/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:32:05 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/12 18:41:44 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** applies the function “f” to each character of the string passed as argument,
** and passing its index as first argument. Each character is passed by
** address to f to be modified if necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
