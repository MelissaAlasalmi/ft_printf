/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/16 16:14:52 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	right_justify(char *value, t_printf *data)
{
	if (data->precision < (int)ft_strlen(value))
	{
		data->precision = (int)ft_strlen(value);
		if (value[0] == '-')
			data->precision--;
	}
	if (data->zero == 1)
	{
		if (data->sign == 1)
			value = ft_putsign(data, value);
		ft_putzeros(data->width - (data->precision + data->sign), data);
	}
	else
	{
		ft_putspaces(data->width - (data->precision + data->sign), data);
		if (data->sign == 1)
			value = ft_putsign(data, value);
	}
	ft_pf_putstr(value, data);
	if (data->dot == 1)
		ft_pf_putchar('.', data);
}

static void	left_justify(char *value, t_printf *data)
{
	if (data->sign == 1)
		value = ft_putsign(data, value);
	if (data->precision < (int)ft_strlen(value))
		data->width = data->width - (ft_strlen(value) + data->sign);
	else
		data->width = data->width - (data->precision + data->sign);
	ft_putzeros(data->precision - ft_strlen(value), data);
	ft_pf_putstr(value, data);
	if (data->dot == 1)
	{
		ft_pf_putchar('.', data);
		data->width--;
	}
	ft_putspaces(data->width, data);
}

void	type_f(va_list args, t_printf *data)
{
	char *value;

	if (data->hash == 1 && data->decimal == 1 && data->precision == 0)
		data->dot = 1;
	if (data->decimal == 0 && data->precision == 0)
		data->precision = 6;
	value = float_converter(args, data);
	if (value[0] == '-' && data->space == 1)
		data->space = 0;
	if (value[0] == '-')
		data->sign = 1;
	if (data->minus == 1)
		left_justify(value, data);
	else
		right_justify(value, data);
}