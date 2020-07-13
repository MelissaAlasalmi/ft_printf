/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/13 19:04:33 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_i(va_list args, t_printf *data) 
{
	unsigned long long value;
	char *sign_dec_int;

	value = (unsigned long long)va_arg(args, void*);
	sign_dec_int = ft_itoa(value);
	if (data->minus != 0 && data->zero != 0)
	{
		ft_pf_putstr(sign_dec_int, data);
		data->width = data->width - ft_strlen(sign_dec_int);
		while (data->width > 0)
		{
			ft_pf_putchar('0', data);
			data->width--;
		}
	}
	else if (data->minus != 0 && data->zero == 0)
	{
		ft_pf_putstr(sign_dec_int, data);
		data->width = data->width - ft_strlen(sign_dec_int);
		while (data->width > 0)
		{
			ft_pf_putchar(' ', data);
			data->width--;
		}
	}
	else if (data->width > (int)ft_strlen(sign_dec_int) && data->zero != 0)
	{
		data->width = data->width - ft_strlen(sign_dec_int);
		while (data->width > 0)
		{
			ft_pf_putchar('0', data);
			data->width--;
		}
		ft_pf_putstr(sign_dec_int, data);
	}
	else if (data->width > (int)ft_strlen(sign_dec_int) && data->zero == 0)
	{
		data->width = data->width - ft_strlen(sign_dec_int);
		while (data->width > 0)
		{
			ft_pf_putchar(' ', data);
			data->width--;
		}
		ft_pf_putstr(sign_dec_int, data);
	}
	else
		ft_pf_putstr(sign_dec_int, data);
    //teststruct_during(data);
}
