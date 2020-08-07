/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/07 14:26:33 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_u(va_list args, t_printf *data)
{
	char *unsign_dec_int;

	unsigned_converter(args, data);
	unsign_dec_int = ft_itoa(data->value);
	if (data->value == 0 && data->decimal == 1 && data->precision == 0)
		unsign_dec_int = "";
	if (data->minus == 1) // left justify!
	{
		if (data->precision < (int)ft_strlen(unsign_dec_int))
			data->width = data->width - ft_strlen(unsign_dec_int);
		else
			data->width = data->width - data->precision;
		ft_putzeros(data->precision - ft_strlen(unsign_dec_int), data);
		ft_pf_putstr(unsign_dec_int, data);
		ft_putspaces(data->width, data);		
	}
	else // right justify!
	{
		if (data->decimal == 0)  // if there's only width or no width
		{
			if (data->zero == 0)
				ft_putspaces(data->width - ft_strlen(unsign_dec_int), data);
			if (data->zero == 1)
				ft_putzeros(data->width - ft_strlen(unsign_dec_int), data);
		}
		else // if there's both width and precision or only prec
		{
			if (data->precision < (int)ft_strlen(unsign_dec_int))
				data->precision = (int)ft_strlen(unsign_dec_int);
			ft_putspaces((data->width - data->precision), data);
			ft_putzeros((data->precision - ft_strlen(unsign_dec_int)), data);
			}
		ft_pf_putstr(unsign_dec_int, data);
	}
}
