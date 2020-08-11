/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoabase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 10:38:18 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/11 13:21:07 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(unsigned long long value, int base)
{
	unsigned int size;

	size = 1;
	if (value == 0)
		return (size);
	while (value / base != 0)
	{
		value /= base;
		size++;
	}
	return (size);
}

char	    *ft_uitoabase(unsigned long long value, int base)
{
	char	*str;
	char	*vals;
	int		size;

	vals = "0123456789abcdef";
	if (base < 2 || base > 16)
		return (NULL);
	size = count_len(value, base);
	str = ft_strnew(size);
	str[size] = '\0';
	size--;
	if (value == 0)
		str[0] = '0';
	else
	{
		while (value)
		{
			str[size] = vals[value % base];
			value /= base;
			size--;
		}
	}
	return (str);
}