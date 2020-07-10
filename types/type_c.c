/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/10 09:53:22 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_printf	type_c(va_list args, t_printf *data)
{
	char c;

	c = (char)va_arg(args, int);
	if (data->width != 0)
	{
		data->width = data->width - 1;
		while (data->width != 0)
		{
			ft_pf_putchar(' ', data);
			data->width = data->width - 1;
		}
		ft_pf_putchar(c, data);
	}
	else
		ft_pf_putchar(c, data);
    teststruct_during(data);
	return(*data);
}
