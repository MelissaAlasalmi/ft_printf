/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:48:12 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/14 16:19:09 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

static long double	rounding(long double fvalue, int precision)
{
	long double	rounded;
	int			dec;

	rounded = 0.5;
	dec = 0;
	if (fvalue < 0)
		rounded = rounded * -1;
	while (dec < precision)
	{
		rounded = rounded / 10.0;
		dec++;
	}
	return (rounded);
}

char				*ft_ftoa(long double fvalue, int precision, int dec)
{
	unsigned long long	value;
	char				*before_dec;
	char				*after_dec;
	char				*res;
	int					i;

	fvalue = fvalue + rounding(fvalue, precision);
	fvalue *= (fvalue < 0) ? -1 : 1;
	value = fvalue;
	before_dec = ft_itoa(value);
	fvalue = precision ? (fvalue - value) : 0;
	after_dec = ft_strnew(precision + 2);
	after_dec[0] = (dec) ? '.' : '\0';
	i = 1;
	while (precision > 0)
	{
		fvalue = fvalue * 10;
		value = fvalue;
		fvalue = fvalue - value;
		after_dec[i] = value + '0';
		i++;
		precision--;
	}
	res = ft_strjoin(before_dec, after_dec);
	free(after_dec);
	free(before_dec);
	return (res);
}