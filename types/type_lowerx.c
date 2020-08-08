/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_lowerx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/08 14:01:14 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//Covers { #, -, width value} 
// To go: { 0, +, space, ., precision value, hh, h, l , ll, L}

void	type_x(va_list args, t_printf *data)
{
	char *base;

	base = unsigned_converter(args, data, 16);
	if (data->hash != 0)
		ft_pf_putstr("0x", data);
	if (data->minus != 0)
	{
		ft_pf_putstr(base, data);
		data->width = data->width - ft_strlen(base);
		ft_putspaces(data->width, data);
	}
	else if (data->width > (int)ft_strlen(base))
	{
		data->width = data->width - ft_strlen(base);
		ft_putspaces(data->width, data);
		ft_pf_putstr(base, data);
	}
	else
		ft_pf_putstr(base, data);
    //teststruct_during(data);
}
