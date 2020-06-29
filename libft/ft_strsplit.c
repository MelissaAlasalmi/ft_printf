/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:39:21 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/12 18:43:10 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** allocates (with malloc(3)) and returns an array of “fresh” strings (all
** ending with ’\0’, including the array itself) obtained by splitting s using
** the character c as a delimiter. If the allocation fails the function returns
** NULL. Example: ft_strsplit("*hello*fellow***students*", ’*’) returns the
** array ["hello", "fellow", "students"]. Uses ft_wordcount and ft_strsub.
*/

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		sp;
	int		i;
	int		j;
	int		temp;
	char	**tab;

	i = 0;
	j = -1;
	sp = ft_wordcount(s, c);
	if (!(tab = malloc((sizeof(char *) * (sp + 1)))))
		return (NULL);
	if (!s || !c || !tab)
		return (NULL);
	while (++j < sp)
	{
		while (s[i] && s[i] == c)
			i++;
		temp = i;
		while (s[i] && s[i] != c)
			i++;
		tab[j] = ft_strsub(s, temp, i - temp);
		i++;
	}
	tab[j] = 0;
	return (tab);
}
