/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:38:47 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/10 12:47:50 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** allocates (with malloc(3)) and returns a copy of the string given as
** argument without whitespaces at the beginning or at the end of the string.
** Will be considered as whitespaces the following characters ’ ’, ’\n’ and
** ’\t’. If s has no whitespaces at the beginning or at the end, the function
** returns a copy of “s”. If the allocation fails the function returns NULL.
** Uses ft_strlen, ft_strnew, and ft_strsub.
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n'
	|| s[i] == '\t'))
		i++;
	j = ft_strlen(&s[i]) - 1;
	while (s[i] && (s[j + i] == ' ' || s[j + i] == '\n'
	|| s[j + i] == '\t'))
		j--;
	if (!(str = ft_strnew(j + 1)))
		return (NULL);
	ft_strncpy(str, (s + i), (j + 1));
	return (str);
}
