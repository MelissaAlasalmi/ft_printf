/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:21:46 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/10 17:34:10 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** lexicographically compares the null-terminated strings “s1” and “s2”.
** Returns an integer greater than, equal to, or less than 0, according as the
** string “s1” is greater than, equal to, or less than the string “s2”. The
** comparison is done using unsigned characters, so that `\200' is greater
** than `\0'.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
