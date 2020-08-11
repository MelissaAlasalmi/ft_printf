/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/11 12:43:13 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_u(va_list args, t_printf *data)
{
	char *value;

	value = unsigned_converter(args, data, 10);
	if (data->minus == 1) // left justify!
	{
		if (data->precision < (int)ft_strlen(value))
			data->width = data->width - ft_strlen(value);
		else
			data->width = data->width - data->precision;
		ft_putzeros(data->precision - ft_strlen(value), data);
		ft_pf_putstr(value, data);
		ft_putspaces(data->width, data);		
	}
	else // right justify!
	{
		if (data->decimal == 0)  // if there's only width or no width
		{
			if (data->zero == 0)
				ft_putspaces(data->width - ft_strlen(value), data);
			if (data->zero == 1)
				ft_putzeros(data->width - ft_strlen(value), data);
		}
		else // if there's both width and precision or only prec
		{
			if (data->precision < (int)ft_strlen(value))
				data->precision = (int)ft_strlen(value);
			ft_putspaces((data->width - data->precision), data);
			ft_putzeros((data->precision - ft_strlen(value)), data);
			}
		ft_pf_putstr(value, data);
	}
}
