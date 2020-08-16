/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:48:12 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/16 13:05:41 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

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
	// printf("rounded:%Lf\n", rounded);
	return (rounded);
}

char		*ft_ftoa(long double fvalue, int precision)
{
	
	long long			value;
	char				*before_dec;
	char				*temp;
	char				*after_dec;
	char				*str;
	int					i;
	int 				j;
	
	i = 0;
	j = 0;
	fvalue = fvalue + rounding(fvalue, precision);
	// printf("fvalue:%Lf\n", fvalue);
	value = fvalue;
	// printf("value:%lld\n", value);
	before_dec = ft_itoa(value);
	// printf("itoa result:%s\n", before_dec);
	// printf("fvalue:%Lf\n", fvalue);
	if (fvalue < 0 && before_dec[i] != '-')
	{
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
	}
	// printf("before_dec after add neg:%s\n", before_dec);
	i = 0;
	fvalue = precision ? (fvalue - value) : 0;
	if (fvalue < 0)
		fvalue = fvalue * -1;
	// printf("fvalue after itoa:%Lf\n", fvalue);
	after_dec = ft_strnew(precision + 2);
	// printf("after_dec:%s|\n", after_dec);
	if (precision > 0)
	{
		after_dec[i] = '.';
		// printf("after_dec add dot:%s|\n", after_dec);
		i++;
		// printf("prec:%d|\n", precision);
		while (precision > 0)
		{
			fvalue = fvalue * 10;
			// printf("fvalue in loop:%Lf\n", fvalue);
			value = fvalue;
			fvalue = fvalue - value;
			after_dec[i] = value + '0';
			// printf("after_dec:%c\n", after_dec[i]);
			i++;
			precision--;
		}
		// printf("before_dec after additions:%s|\n", before_dec);
		// printf("after_dec after additions:%s|\n", after_dec);
	}
	after_dec[i] = '\0';
	str = ft_strjoin(before_dec, after_dec);
	free(after_dec);
	free(before_dec);
	return (str);
}