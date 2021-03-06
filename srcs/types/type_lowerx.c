/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_lowerx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/17 14:12:02 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	right_prec(char *base, t_printf *data)
{
	if (data->precision < (int)ft_strlen(base))
		data->precision = (int)ft_strlen(base);
	data->width = data->width - (ft_strlen(base) + data->hash);
	data->precision = data->precision - ft_strlen(base);
	ft_putspaces(data->width - data->precision, data);
	if (data->hash == 2)
		ft_pf_putstr("0x", data);
	ft_putzeros(data->precision, data);
}

static void	right_justify(char *base, t_printf *data)
{
	if (data->decimal == 0)
	{
		if (data->width < (int)ft_strlen(base))
			data->width = (int)ft_strlen(base);
		if (data->zero == 1)
		{
			if (data->hash == 2)
				ft_pf_putstr("0x", data);
			ft_putzeros(data->width - (ft_strlen(base) + data->hash), data);
		}
		else
		{
			ft_putspaces(data->width - (ft_strlen(base) + data->hash), data);
			if (data->hash == 2)
				ft_pf_putstr("0x", data);
		}
	}
	else
		right_prec(base, data);
	ft_pf_putstr(base, data);
	free(base);
}

static void	left_justify(char *base, t_printf *data)
{
	if (data->hash == 2)
		ft_pf_putstr("0x", data);
	if (data->precision < (int)ft_strlen(base))
		data->width = data->width - (ft_strlen(base) + data->hash);
	else
		data->width = data->width - (data->precision + data->hash);
	ft_putzeros(data->precision - ft_strlen(base), data);
	ft_pf_putstr(base, data);
	ft_putspaces(data->width, data);
	free(base);
}

void		type_lowerx(va_list args, t_printf *data)
{
	char *base;

	base = unsigned_converter(args, data, 16);
	if (*base == '0')
		data->hash = 0;
	if (*base == '0' && data->decimal == 1 && data->precision == 0)
		*base = 0;
	if (data->hash == 1)
		data->hash = 2;
	if (data->minus == 1)
		left_justify(base, data);
	else
		right_justify(base, data);
}
