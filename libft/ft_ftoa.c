/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:48:12 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/10 13:08:12 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static long double	roundup(long double floatvalue, int precision)
{
	long double	rounded;
	int			decimal;

	rounded = 0.5;
	decimal = 0;
	if (floatvalue < 0)
		rounded *= -1;
	while (decimal++ < precision)
		rounded /= 10.0;
	return (rounded);
}

char				*ft_ftoa(long double floatvalue, int precision, int decimal)
{
	unsigned long long	value;
	char				*pre_decimal;
	char				*post_decimal;
	char				*str;
	int					i;

	floatvalue = floatvalue + roundup(floatvalue, precision);
	floatvalue *= (floatvalue < 0) ? -1 : 1;
	value = floatvalue;
	pre_decimal = ft_itoa(value);
	floatvalue = precision ? (floatvalue - value) : 0;
	post_decimal = ft_strnew(precision + 2);
	post_decimal[0] = (decimal) ? '.' : '\0';
	i = 1;
	while (precision-- > 0)
	{
		floatvalue *= 10;
		value = floatvalue;
		floatvalue = floatvalue - value;
		post_decimal[i++] = value + '0';
	}
	str = ft_strjoin(pre_decimal, post_decimal);
	free(post_decimal);
	free(pre_decimal);
	return (str);
}