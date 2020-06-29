/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:33:23 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:33:11 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** converts the initial portion of the string pointed to by “str” to “int”
** representation. Returns the result.
*/

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		res;
	int		neg;
	int		i;
	int		num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
		str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = 10 * num + (str[i] - '0');
		i++;
	}
	res = num * neg;
	return (res);
}
