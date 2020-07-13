/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/13 14:57:44 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_c(va_list args, t_printf *data)
{
	char c;

	c = (char)va_arg(args, int);
	if (data->minus != 0)
	{
		ft_pf_putchar(c, data);
		data->width = data->width - 1;
		while (data->width != 0)
		{
			ft_pf_putchar(' ', data);
			data->width = data->width - 1;
		}
	}
	else if (data->width != 0)
	{
		data->width = data->width - 1;
		while (data->width != 0)
		{
			ft_pf_putchar(' ', data);
			data->width = data->width - 1;
		}
		ft_pf_putchar(c, data);
	}
	// if (data->asterisk != 0)
	// 	// add * format
	else
		ft_pf_putchar(c, data);
    //teststruct_during(data);
}
