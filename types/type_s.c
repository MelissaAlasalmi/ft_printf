/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/09 15:29:38 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_s(va_list args, t_printf *data)
{
	char *str;
	str = va_arg(args, char*);
	if (data->width > 0 && data->width > (int)ft_strlen(str))
	{
		data->width = data->width - ft_strlen(str);
		while (data->width != 0)
		{
			write(1, " ", 1);
			data->width--;
		}
		ft_putstr(str);
	}
	else
	{
		data->width = 0; // does the width value always need to be reset?
		ft_putstr(str);
	}
}
