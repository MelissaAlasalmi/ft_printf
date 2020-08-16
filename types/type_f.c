/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/16 11:00:25 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*ft_putsign(t_printf *data, char *floatstr)
{
	int i;

	i = 0;
	if (data->ldvalue < 0)
	{
		ft_pf_putchar('-', data);
		while (floatstr[i] != '\0')
		{
			floatstr[i] = floatstr[i + 1];
			i++;
		}
	}
	else
	{
		if (data->plus == 1)
			ft_pf_putchar('+', data);
		else if (data->space == 1)
			ft_pf_putchar(' ', data);
	}
	return (floatstr);
}

void	type_f(va_list args, t_printf *data)
{
	char *floatstr;
		data->ldvalue = (double)va_arg(args, double);
	if (data->precision == 0)
		data->precision = 6;
	floatstr = ft_ftoa(data->ldvalue, data->precision);
	if (floatstr[0] == '-' && data->space == 1)
		data->space = 0;
	if (floatstr[0] == '-')
		data->sign = 1;
	if (data->minus == 1)
	{
		if (data->sign == 1)
			floatstr = ft_putsign(data, floatstr);
		if (data->precision < (int)ft_strlen(floatstr))
			data->width = data->width - (ft_strlen(floatstr) + data->sign);
		else
			data->width = data->width - (data->precision + data->sign);
		ft_putzeros(data->precision - ft_strlen(floatstr), data);
		ft_pf_putstr(floatstr, data);
		ft_putspaces(data->width, data);
	}
	else
	{
		if (data->precision < (int)ft_strlen(floatstr))
		{
			data->precision = (int)ft_strlen(floatstr);
			if (data->ldvalue < 0)
				data->precision--;
		}
		ft_putspaces(data->width - (data->precision + data->sign), data);
		if (data->sign == 1)
			floatstr = ft_putsign(data, floatstr);
		ft_putzeros(data->precision - ft_strlen(floatstr), data);
		ft_pf_putstr(floatstr, data);
	}
}