/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/08 14:58:09 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*ft_putsign(t_printf *data, char *valuestr)
{
	int i;

	i = 0;
	if (data->ivalue < 0)
	{
		ft_pf_putchar('-', data);
		while (valuestr[i] != '\0')
		{
			valuestr[i] = valuestr[i + 1];
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
	return(valuestr);
}

static void	ft_right_prec(char *value, t_printf *data)
{
	if (data->precision < (int)ft_strlen(value))
	{
		data->precision = (int)ft_strlen(value);
		if (data->ivalue < 0)
			data->precision--;
	}
	ft_putspaces(data->width - (data->precision + data->sign), data);
	if (data->sign == 1)
		value = ft_putsign(data, value);
	ft_putzeros(data->precision - ft_strlen(value), data);
}

static void	ft_right_justify(char *value, t_printf *data)
{
	if (data->decimal == 0)
	{
		if (data->zero == 0)
		{
			if (data->ivalue < 0)
				data->width++;
			ft_putspaces(data->width - (ft_strlen(value) + data->sign), data);
		}
		if (data->sign == 1)
			value = ft_putsign(data, value);
		if (data->zero == 1)
			ft_putzeros(data->width - (ft_strlen(value) + data->sign), data);
	}
	else
		ft_right_prec(value, data);
	ft_pf_putstr(value, data);
}

void	type_d(va_list args, t_printf *data)
{
	char *value;

	value = signed_converter(args, data);
	if (value[0] == '-' && data->space == 1)
		data->space = 0;
	if (value[0] == '-')
		data->sign = 1;
	if (data->minus == 1)
	{
		if (data->sign == 1)
			value = ft_putsign(data, value);
		if (data->precision < (int)ft_strlen(value))
			data->width = data->width - (ft_strlen(value) + data->sign);
		else
			data->width = data->width - (data->precision + data->sign);
		ft_putzeros(data->precision - ft_strlen(value), data);
		ft_pf_putstr(value, data);
		ft_putspaces(data->width, data);
	}
	else
		ft_right_justify(value, data);
}
