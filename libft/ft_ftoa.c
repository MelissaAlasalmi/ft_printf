/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:48:12 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/20 20:53:23 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

long double	roundup(long double floatvalue, int precision)
{
	long double	rounded;
	int			decimal;

	rounded = 0.5;
	decimal = 0;
	if (floatvalue < 0)
		rounded *= -1;
	while (decimal < precision)
	{
		rounded /= 10.0;
		decimal++;
	}
	return (rounded);
}

char 		*precision(long double floatvalue, int precision)
{
	char	*str;
	int		i;
	int		num;

	num = precision;
	str = ft_strnew(precision + 1);
	str[0] = '.';
	i = 1;
	while (precision > 0)
	{
		floatvalue *= 10;
		str[i] = (int)floatvalue + '0';
		floatvalue -= (int)floatvalue;
		precision--;
		i++;
	}
	floatvalue *= 10;
	if (num > 18 && floatvalue >= 5.0)
		str[i - 1]++;
	return (str);
}

char		*ft_ftoa(long double floatvalue, int precision, int decimal)
{
	unsigned long long	value;
	char				*pre_decimal;
	char				*post_decimal;
	char				*ftoa_str;

	floatvalue = floatvalue + roundup(floatvalue, precision);
	value =	floatvalue;
	pre_decimal = (floatvalue < 0.0 && floatvalue > -1.0) 
				? ft_strjoin("-", ft_itoa(data->value)) : ft_itoa(data->value);
	floatvalue = (floatvalue < 0.0) ? floatvalue *= -1 : floatvalue;
	if (!(decimal) && !(precision))
		return (pre_decimal);
	floatvalue -= (value < 0) ? -value : value;
	post_decimal = precission(floatvalue, precision);
	ftoa_str = ft_strjoin(pre_decimal, post_decimal);
	free(pre_decimal);
	free(post_decimal);
	return (ftoa_str);
}