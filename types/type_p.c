/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/13 15:15:24 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_p(va_list args, t_printf *data)
{
	unsigned long long value;
	char *base;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoabase(value, 16);
	if (data->minus != 0)
	{
		ft_pf_putstr("0x",data);
		ft_pf_putstr(base, data);
		data->width = data->width - ft_strlen(base); //fix this, it's WET AF
		data->width = data->width - 2; //fix this, it's WET AF
		while (data->width > 0)
		{
			ft_pf_putchar(' ', data);
			data->width--;
		}
	}
	else if (data->width > (int)(ft_strlen(base) - 2))
	{
		data->width = data->width - ft_strlen(base); //fix this, it's WET AF
		data->width = data->width - 2; //fix this, it's WET AF
		while (data->width > 0)
		{
			ft_pf_putchar(' ', data);
			data->width--;
		}
		ft_pf_putstr("0x",data);
		ft_pf_putstr(base, data);
	}
	else
	{
		ft_pf_putstr("0x",data);
		ft_pf_putstr(base, data);
	}
    //teststruct_during(data);
}
