/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/09 15:28:30 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_c(va_list args, t_printf *data)
{
	char c;

	c = (char)va_arg(args, int);
	if (data->width != 0)
	{
		data->width = data->width - 1;
		while (data->width != 0)
		{
			write(1, " ", 1);
			data->width = data->width - 1;
		}
		ft_putchar(c);
	}
	else
		ft_putchar(c);
}
