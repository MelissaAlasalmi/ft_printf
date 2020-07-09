/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_precision_len.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:32 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/09 14:26:38 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	precision_len(char *nformat)
{
	int precision_len;
	int i;
	precision_len = 0;
	i = 0;

	while (nformat[i] != '\0')
	{
		if (nformat[i] == '.')
		{
			i++;
			while (nformat[i] <=  '0' && nformat[i] >= '9')
				precision_len++;
        }
		else
			i++;
	}
    return(precision_len);
}

int	width_len(char *nformat)
{
	int width_len;
	width_len = 0;

	while (*nformat != '\0')
	{
		if (*nformat == '.')
			break ;
		else if (*nformat == '0' && *nformat + 1 >= '0' && *nformat + 1 <= '9')
		{
			width_len = ft_intlen(ft_atoi(nformat + 1));
			break ;
		}
		else if (*nformat >= '0' && *nformat <= '9')
		{
			width_len = ft_intlen(ft_atoi(nformat));
			break ;
		}
		else
			nformat++;
	}
    return(width_len);
}
