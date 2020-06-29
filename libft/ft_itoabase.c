/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 10:38:18 by malasalm          #+#    #+#             */
/*   Updated: 2020/06/29 10:58:01 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoabase(long value, int base)
{
	char	*str;
	int		i;
    long    basestart;
    int     modulo;

	i = ft_intlen(value);
    basestart = 1;
    modulo = 0;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	i = 0;
    if (value == 0)
		str[0] = 48;
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
	while (value >= 0 && basestart > 0)
	{
        if (value < basestart)
		    str[i] = 48;
        else
        {
            while (value >= basestart)
            {
                modulo++;
                value = value - basestart;
            }
            str[i] = modulo <= 9 ? '0' + modulo : 'A' + (modulo % 10);
        }
        basestart = (basestart / base);  
        modulo = 0;
        i++;
	}
	return (str);
}