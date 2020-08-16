/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/16 14:53:57 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_u(va_list args, t_printf *data)
{
	char *value;

	value = unsigned_converter(args, data, 10);
	if (*value == '0' && data->decimal == 1 && data->precision == 0)
	{
		value = "";
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
	}
	else
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
	}
}
