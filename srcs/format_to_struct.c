/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_to_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:25:10 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/17 13:52:31 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		length(char flag, t_printf *data)
{
	if (flag == 'h')
	{
		if (data->h == 1)
		{
			data->hh = 1;
			data->h = 0;
		}
		else
			data->h = 1;
	}
	else if (flag == 'l')
	{
		if (data->l == 1)
		{
			data->ll = 1;
			data->l = 0;
		}
		else
			data->l = 1;
	}
	else if (flag == 'L')
		data->upperl = 1;
}

void		amplifiers(char flag, t_printf *data)
{
	if (flag == '#')
		data->hash = 1;
	else if (flag == '0')
		data->zero = 1;
	else if (flag == '-')
		data->minus = 1;
	else if (flag == '+')
	{
		data->plus = 1;
		data->sign = 1;
	}
	else if (flag == ' ')
	{
		data->space = 1;
		data->sign = 1;
	}
}

t_printf	format_to_struct(t_printf *data)
{
	char c;

	c = *data->nformat;
	if ((c == '#' || c == '0' || c == '-' ||
		c == '+' || c == ' ') && data->decimal == 0)
		amplifiers(c, data);
	else if (c >= 48 && c <= 57 && data->decimal == 0)
	{
		data->width = ft_atoi(data->nformat);
		data->nformat += ft_intlen(data->width);
	}
	else if (c == '.')
		data->decimal = 1;
	else if (c >= 48 && c <= 57 && data->decimal == 1)
	{
		data->precision = ft_atoi(data->nformat);
		data->nformat += ft_intlen(data->precision);
	}
	else if (c == 'h' || c == 'l' || c == 'L')
		length(c, data);
	return (*data);
}
