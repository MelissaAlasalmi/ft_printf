/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:31:48 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/12 18:41:40 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** applies the function “f” to each character of the string passed as argument.
** Each character is passed by address to “f” to be modified if necessary.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		f(&s[i]);
		i++;
	}
}
