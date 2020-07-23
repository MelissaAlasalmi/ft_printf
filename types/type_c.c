/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/23 17:55:59 by Melissa          ###   ########.fr       */
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
		ft_putspaces(data->width, data);
	}
	else if (data->width != 0)
	{
		data->width = data->width - 1;
		ft_putspaces(data->width, data);
		ft_pf_putchar(c, data);
	}
	// if (data->asterisk != 0)
	// 	// add * format
	else
		ft_pf_putchar(c, data);
    //teststruct_during(data);
}
