/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_lowerx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/20 14:13:47 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_x(va_list args, t_printf *data)
{
    unsigned long long value;
	char *base;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoabase(value, 16);
	if (data->hash != 0)
		ft_pf_putstr("0x", data);
	if (data->minus != 0)
	{
		ft_pf_putstr(base, data);
		data->width = data->width - ft_strlen(base);
		ft_putspaces(data);
	}
	else if (data->width > (int)ft_strlen(base))
	{
		data->width = data->width - ft_strlen(base);
		ft_putspaces(data);
		ft_pf_putstr(base, data);
	}
	else
		ft_pf_putstr(base, data);
    //teststruct_during(data);
}
