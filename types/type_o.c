/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:27 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/23 17:57:48 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//Covers { #, -, width value} 
// To go: { 0, +, space, ., precision value, hh, h, l , ll, L}

void	type_o(va_list args, t_printf *data)
{
	char *base;
	
	unsigned_converter(args, data);
	base = ft_itoabase(data->value, 8);
	if (data->hash != 0)
		ft_pf_putchar('0', data);
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
