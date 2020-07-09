/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 10:38:18 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/09 14:22:15 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_findbase(long value, int base, char	*str, int i, long basestart)
{
    int modindex;
    modindex = 0;
    
    while (value >= 0 && basestart > 0)
	{
        if (value < basestart)
		    str[i] = '0';
        else
        {
            while (value >= basestart)
            {
                modindex++;
                value = value - basestart;
            }
            str[i] = modindex <= 9 ? '0' + modindex : 'a' + (modindex % 10);
        }
        basestart = (basestart / base);  
        modindex = 0;
        i++;
	}
}

char	*ft_itoabase(long value, int base)
{
	char	*str;
	int		i;
    long    basestart;
    

	i = ft_intlen(value);
    basestart = 1;
    
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	i = 0;
    if (value == 0)
		str[0] = '0';
	else if (value < 0)
    {
		str[0] = '-';
        i = 1;
    }
    else
    {
        while (value > (basestart * base))
            basestart = basestart * base;
    }
    ft_findbase(value, base, str, i, basestart);
	return (str);
}