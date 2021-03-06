/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/17 14:10:47 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_p(va_list args, t_printf *data)
{
	unsigned long long	value;
	char				*base;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoabase(value, 16);
	if (data->minus != 0)
	{
		ft_pf_putstr("0x", data);
		ft_pf_putstr(base, data);
		ft_putspaces(data->width - (ft_strlen(base) + 2), data);
	}
	else
	{
		ft_putspaces(data->width - (ft_strlen(base) + 2), data);
		ft_pf_putstr("0x", data);
		ft_pf_putstr(base, data);
	}
	free(base);
}
