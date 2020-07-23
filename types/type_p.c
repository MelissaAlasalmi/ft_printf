/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/23 17:58:01 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// Covers { -, width value} 
// To go: {All done!}

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
		data->width = data->width - ft_strlen(base);
		data->width = data->width - 2;
		ft_putspaces(data->width, data);
	}
	else if (data->width > (int)(ft_strlen(base) - 2))
	{
		data->width = data->width - ft_strlen(base);
		data->width = data->width - 2;
		ft_putspaces(data->width, data);
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
