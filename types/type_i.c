/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/07 14:48:01 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_i_right_prec(char *sign_dec_int, t_printf *data)
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

void	ft_i_right_justify(char *sign_dec_int, t_printf *data)
{
	if (data->decimal == 0)
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
	else
		ft_i_right_prec(sign_dec_int, data);
	
	ft_pf_putstr(sign_dec_int, data);
}

void	type_i(va_list args, t_printf *data)
{
	char *sign_dec_int;

	signed_converter(args, data);
	sign_dec_int = ft_itoa(data->value);
	if (data->value == 0 && data->decimal == 1 && data->precision == 0)
		sign_dec_int = "";
	if (data->minus == 1)
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
	else
		ft_i_right_justify(sign_dec_int, data);
}