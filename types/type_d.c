/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/22 15:13:32 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// Covers { 0, -, width value, + , hh, h, l , ll, L} 
// To go: { space, ., precision value}

void	type_d(va_list args, t_printf *data)
{
	char *sign_dec_int;
	
	signed_converter(args, data);
	sign_dec_int = ft_itoa(data->value);
	if (data->minus == 1) // left justify!
	{
		if (data->width > 0 && data->decimal == 0) // if there's only width
		{
			if (data->plus == 1) // if we need a plus sign
			{
				ft_pf_putchar('+', data);
				ft_pf_putstr(sign_dec_int, data);
			}
			else
				ft_pf_putstr(sign_dec_int, data);
			data->width = data->width - ft_strlen(sign_dec_int); //now we have the leftovers to deal with ...
			if (data->width > 0 && data->zero == 1)
				ft_putzeros(data);
			else
				ft_putspaces(data);
		}
	}
	else // right justify!
	{
		if (data->width > 0 && data->decimal == 0) // if there's only width
		{
			if (data->plus == 1) // if we need a plus sign
			{
				data->width = data->width - (ft_strlen(sign_dec_int) + 1);
				if (data->width > 0 && data->zero == 1) // if there's a zero
					ft_putzeros(data);
				else
					ft_putspaces(data);
				ft_pf_putchar('+', data);
			}
			else // if we DO NOT need a plus sign
			{
				data->width = data->width - ft_strlen(sign_dec_int);
				if (data->width > 0 && data->zero == 1)
					ft_putzeros(data);
				else
					data->width = data->width - ft_strlen(sign_dec_int);
					ft_putspaces(data);
			}
			ft_pf_putstr(sign_dec_int, data);
		}
		else
			ft_pf_putstr(sign_dec_int, data);
	}
    // //teststruct_during(data);
}
		// printf("width at this point: %d\n", data->width);
		// printf("value at this point: %s\n", sign_dec_int);