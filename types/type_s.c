/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/11 11:07:39 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_s(va_list args, t_printf *data)
{
	char *str;
	long temp;
	
	if ((str = va_arg(args, char*)) == NULL)
		str = "(null)";
	temp = data->width;
	if (data->decimal == 1 && data->precision == 0)
		str = "";
	if (data->minus == 1)
	{
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
		{
			ft_pf_putstr(str, data);
			data->width = data->width - ft_strlen(str);
		}
		ft_putspaces(data->width, data);
	}
	else
	{
		if (data->width > (int)ft_strlen(str))
			data->width = data->width - ft_strlen(str);
		else if (data->width <= (int)ft_strlen(str) && data->precision == 0)
			data->width = 0;
		else
			data->width = data->width - data->precision;
		if (data->decimal == 1 && data->width > 0 && temp > (data->width + data->precision))
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
}
