/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:48:12 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/16 16:53:09 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

static char 	*neg_zero(char *before_dec)
{
	char	*temp;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	temp = before_dec;
	before_dec = ft_strnew(ft_strlen(before_dec) + 1);
	before_dec[i] = '-';
	i++;
	while (temp[j] != '\0')
	{
		before_dec[i] = temp[j];
		i++;
		j++;
	}
	return(before_dec);
}

long double	rounding(long double fvalue, int precision)
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

char		*ft_ftoa(long double fvalue, int precision)
{
	long long			value;
	char				*before_dec;
	char				*after_dec;
	char				*str;
	int					i;
	
	i = 0;
	fvalue = fvalue + rounding(fvalue, precision);
	value = fvalue;
	before_dec = ft_itoa(value);
	if (fvalue < 0 && before_dec[i] != '-')
		before_dec = neg_zero(before_dec);
	fvalue = precision ? (fvalue - value) : 0;
	if (fvalue < 0)
		fvalue = fvalue * -1;
	after_dec = ft_strnew(precision + 2);
	if (precision > 0)
	{
		after_dec[i] = '.';
		i++;
		while (precision > 0)
		{
			fvalue = fvalue * 10;
			value = fvalue;
			fvalue = fvalue - value;
			after_dec[i] = value + '0';
			i++;
			precision--;
		}
	}
	after_dec[i] = '\0';
	str = ft_strjoin(before_dec, after_dec);
	free(after_dec);
	free(before_dec);
	return (str);
}