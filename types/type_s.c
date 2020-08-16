/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/16 16:20:01 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	right_justify(char *str, t_printf *data, long temp)
{
	if (data->width > (int)ft_strlen(str))
		data->width = data->width - ft_strlen(str);
	else if (data->width <= (int)ft_strlen(str) && data->precision == 0)
		data->width = 0;
	else
		data->width = data->width - data->precision;
	if (data->decimal == 1 && data->width > 0 &&
		temp > (data->width + data->precision))
	{
		temp = temp - (data->width + data->precision);
		ft_putspaces(temp, data);
	}
	ft_putspaces(data->width, data);
	if (data->precision > 0)
	{
		while (data->precision > 0 && *str != '\0')
		{
			ft_pf_putchar(*str, data);
			str++;
			data->precision--;
			data->width--;
		}
	}
	else
		ft_pf_putstr(str, data);
}

static void	left_justify(char *str, t_printf *data)
{
	if (data->precision > 0)
	{
		while (data->precision > 0 && *str != '\0')
		{
			ft_pf_putchar(*str, data);
			data->precision--;
			data->width--;
			str++;
		}
	}
	else
	{
		ft_pf_putstr(str, data);
		data->width = data->width - ft_strlen(str);
	}
	ft_putspaces(data->width, data);
}

void		type_s(va_list args, t_printf *data)
{
	char *str;
	long temp;

	temp = data->width;
	if ((str = va_arg(args, char*)) == NULL)
		str = "(null)";
	if (data->decimal == 1 && data->precision == 0)
		str = "";
	if (data->minus == 1)
		left_justify(str, data);
	else
		right_justify(str, data, temp);
}
