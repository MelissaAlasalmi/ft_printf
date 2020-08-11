/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 10:38:18 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/11 13:21:16 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long long value, int base, int neg)
{
	unsigned int size;

	size = 1;
	if (value == 0)
		return (size);
	if (neg)
		size++;
	while (value / base != 0)
	{
		value /= base;
		size++;
	}
	return (size);
}

char		*ft_itoabase(long long value, int base)
{
	char	*str;
	char	*vals;
	int		size;
	int		neg;

	vals = "0123456789abcdef";
	neg = 0;
	if (base < 2 || base > 16)
		return (NULL);
	if (value < 0 && base == 10)
		neg = 1;
	size = count_len(value, base, neg);
	str = ft_strnew(sizeof(size + 1));
	str[size--] = '\0';
	if (value == 0)
		return (str = ft_strcpy(str, "0"));
	while (value)
	{
		str[size] = vals[value % base];
		value /= base;
		size--;
	}
	if (neg)
		str[0] = '-';
	return (str);
    }