/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/17 14:16:01 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	right_justify(char *value, t_printf *data)
{
	if (data->decimal == 0)
	{
		if (data->zero == 0)
			ft_putspaces(data->width - ft_strlen(value), data);
		if (data->zero == 1)
			ft_putzeros(data->width - ft_strlen(value), data);
	}
	else
	{
		if (data->precision < (int)ft_strlen(value))
			data->precision = (int)ft_strlen(value);
		ft_putspaces((data->width - data->precision), data);
		ft_putzeros((data->precision - ft_strlen(value)), data);
	}
	ft_pf_putstr(value, data);
	free(value);
}

void		type_u(va_list args, t_printf *data)
{
	char *value;

	value = unsigned_converter(args, data, 10);
	if (*value == '0' && data->decimal == 1 && data->precision == 0)
	{
		*value = 0;
		data->precision--;
	}
	if (data->minus == 1)
	{
		if (data->precision < (int)ft_strlen(value))
			data->width = data->width - ft_strlen(value);
		else
			data->width = data->width - data->precision;
		ft_putzeros(data->precision - ft_strlen(value), data);
		ft_pf_putstr(value, data);
		ft_putspaces(data->width, data);
		free(value);
	}
	else
		right_justify(value, data);
}
