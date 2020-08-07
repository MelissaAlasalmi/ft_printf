/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/07 14:29:34 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_i(va_list args, t_printf *data)
{
	char *sign_dec_int;

	signed_converter(args, data);
	sign_dec_int = ft_itoa(data->value);
	if (data->value == 0 && data->decimal == 1 && data->precision == 0)
		sign_dec_int = "";
	if (data->minus == 1) // left justify!
	{	
		if (data->sign == 1)
			sign_dec_int = ft_putsign(data, sign_dec_int);
		if (data->precision < (int)ft_strlen(sign_dec_int))
			data->width = data->width - (ft_strlen(sign_dec_int) + data->sign);
		else
			data->width = data->width - (data->precision + data->sign);
		ft_putzeros(data->precision - ft_strlen(sign_dec_int), data);
		ft_pf_putstr(sign_dec_int, data);
		ft_putspaces(data->width, data);		
	}
	else // right justify!
	{
		if (data->decimal == 0)  // if there's only width or no width
		{
			if (data->zero == 0)
			{
				if (data->value < 0)
					data->width++;
				ft_putspaces(data->width - (ft_strlen(sign_dec_int) + data->sign), data);
			}
			if (data->sign == 1)
				sign_dec_int = ft_putsign(data, sign_dec_int);
			if (data->zero == 1)
				ft_putzeros(data->width - (ft_strlen(sign_dec_int) + data->sign), data);
		}
		else // if there's both width and precision or only prec
		{
			if (data->precision < (int)ft_strlen(sign_dec_int))
			{
				data->precision = (int)ft_strlen(sign_dec_int);
				if (data->value < 0)
					data->precision--;					
			}
			ft_putspaces(data->width - (data->precision + data->sign), data);
			if (data->sign == 1)
				sign_dec_int = ft_putsign(data, sign_dec_int);
			ft_putzeros(data->precision - ft_strlen(sign_dec_int), data);
			}
		ft_pf_putstr(sign_dec_int, data);
	}
}