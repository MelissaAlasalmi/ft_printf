/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:17:20 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:35:20 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copies the string “src” to “dst” including the terminating `\0' character.
** Returns “dst”.
*/

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
