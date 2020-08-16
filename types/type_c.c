/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/16 15:16:24 by Melissa          ###   ########.fr       */
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
		ft_putspaces((data->width - 1), data);
	}
	else
	{
		ft_putspaces((data->width - 1), data);
		ft_pf_putchar(c, data);
	}
}
