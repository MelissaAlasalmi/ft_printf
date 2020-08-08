/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoabase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 10:38:18 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/08 14:32:12 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_findbase(unsigned long long value, int base, char *str, int i)
{
    int 					modindex;
	unsigned long long   	basestart;
		
    modindex = 0;
	basestart = 1;
	{
        while (value > (basestart * base))
            basestart = basestart * base;
    }
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

char	*ft_uitoabase(unsigned long long value, int base)
{
	char	    *str;
	int		    i;

	i = ft_intlen(value);    
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	i = 0;
    if (value == 0)
		str[0] = '0';
    else
    	ft_findbase(value, base, str, i);
	return (str);
}