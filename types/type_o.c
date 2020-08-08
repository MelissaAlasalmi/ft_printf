/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:27 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/08 14:55:47 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_o(va_list args, t_printf *data)
{
	char *base;
	
	base = unsigned_converter(args, data, 8);
	if (data->decimal == 1 && data->precision == 0)
		data->decimal = 0;
	// if (data->ivalue == 0 && data->hash == 1 && data->decimal == 1 && data->precision == 0)
	// {
	// 	base = "";
	// 	data->width--;
	// }
	if (data->minus == 1) // left justify!
	{	
		if (data->hash == 1)
			ft_pf_putchar('0', data);
		if (data->precision < (int)ft_strlen(base))
			data->width = data->width - (ft_strlen(base) + data->hash);
		else
			data->width = data->width - data->precision;
		ft_putzeros(data->precision - (ft_strlen(base) + data->hash), data);
		ft_pf_putstr(base, data);
		ft_putspaces(data->width, data);
	}
	else // right justify!
	{
		if (data->decimal == 0)  // if there's only width or no width
		{
			if (data->zero == 0)
				ft_putspaces(data->width - (ft_strlen(base) + data->hash), data);
			if (data->zero == 1)
				ft_putzeros(data->width - (ft_strlen(base) + data->hash), data);
		}
		else // if there's both width and precision or only prec
		{
			if (data->precision < (int)ft_strlen(base))
			{
				data->precision = (int)ft_strlen(base);
				if (data->hash == 1)		
					data->precision++;	
			}
			ft_putspaces(data->width - data->precision, data);
			ft_putzeros(data->precision - (ft_strlen(base) + data->hash), data);
		}
		if (data->hash == 1)
			ft_pf_putchar('0', data);
		ft_pf_putstr(base, data);
	}
}