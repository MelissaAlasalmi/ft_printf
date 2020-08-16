/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:25:58 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/16 19:10:55 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	type_percent(t_printf *data)
{
	if (data->minus == 1)
	{
		if (data->precision < 1)
			data->width--;
		else
			data->width = data->width - data->precision;
		ft_putzeros(data->precision - 1, data);
		ft_pf_putchar('%', data);
		ft_putspaces(data->width, data);		
	}
	else
	{
		if (data->decimal == 0)
		{
			if (data->zero == 0)
				ft_putspaces(data->width - 1, data);
			if (data->zero == 1)
				ft_putzeros(data->width - 1, data);
		}
		else
		{
			if (data->precision < 1)
				data->precision = 1;
			ft_putspaces((data->width - data->precision), data);
			ft_putzeros((data->precision - 1), data);
		}
		ft_pf_putchar('%', data);
	}
}

t_printf	*output_numerics(va_list args, t_printf *data)
{
	if (*data->nformat == 'd')
		type_d(args, data);
	else if (*data->nformat == 'i')
		type_i(args, data);
	else if (*data->nformat == 'o')
		type_o(args, data);
	else if (*data->nformat == 'u')
		type_u(args, data);
	else if (*data->nformat == 'x')
		type_x(args, data);
	else if (*data->nformat == 'X')
		type_X(args, data);
	else if (*data->nformat == 'f')
		type_f(args, data);
	else if (*data->nformat == 'b')
		type_b(args, data);
	else if (*data->nformat == '%')
		type_percent(data);
	return (data);
}

t_printf	*output(va_list args, t_printf *data)
{
	if (*data->nformat == 'c')
		type_c(args, data);
	else if (*data->nformat == 's')
		type_s(args, data);
	else if (*data->nformat == 'p')
		type_p(args, data);
	return (output_numerics(args, data));
}
