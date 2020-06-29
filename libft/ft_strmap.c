/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:32:49 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/10 17:26:18 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** applies the function “f” to each character of the string given as argument
** to create a “fresh” new string (with malloc(3)) resulting from the successive
** applications of “f”. Uses ft_strnew and ft_strlen. Returns the “fresh” string
** created from the successive applications of “f”.
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*fstr;

	if (!s || !f)
		return (NULL);
	i = 0;
	if (!(fstr = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i] != '\0')
	{
		fstr[i] = (*f)(s[i]);
		i++;
	}
	return (fstr);
}
