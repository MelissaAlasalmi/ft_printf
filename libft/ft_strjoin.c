/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:38:05 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/12 18:29:18 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’,
** the result of the concatenation of s1 and s2. If the allocation fails the
** function returns NULL. Uses ft_strlen, ft_strcpy, and ft_strcat.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
