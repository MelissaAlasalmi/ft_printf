/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/20 20:01:04 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// Covers { -, width value} 
// To go: {All done!}

void	type_c(va_list args, t_printf *data)
{
	char c;

	c = (char)va_arg(args, int);
	if (data->minus != 0)
	{
		ft_pf_putchar(c, data);
		data->width = data->width - 1;
		ft_putspaces(data);
	}
	else if (data->width != 0)
	{
		data->width = data->width - 1;
		ft_putspaces(data);
		ft_pf_putchar(c, data);
	}
	// if (data->asterisk != 0)
	// 	// add * format
	else
		ft_pf_putchar(c, data);
    //teststruct_during(data);
}
