/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/20 21:38:42 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// Covers { 0, -, width value} 
// To go: { +, space, ., precision value, hh, h, l , ll, L}

void	type_d(va_list args, t_printf *data)
{
	char *sign_dec_int;

	signed_converter(args, data);
	sign_dec_int = ft_itoa(data->value);
	if (data->value < 0) // cancel out all of the flags that only work for positive numbers
		data->plus = 0;
	if (data->value > 0 && data->plus != 0) 
	{
		ft_pf_putchar('+', data);
		ft_pf_putstr(sign_dec_int, data);
	}
	if (data->minus != 0 && data->zero != 0) // left justified with printed zeros
	{
		ft_pf_putstr(sign_dec_int, data);
		data->width = data->width - ft_strlen(sign_dec_int);
		ft_putzeros(data);
	}
	else if (data->minus != 0 && data->zero == 0) // left justified with printed spaces
	{
		ft_pf_putstr(sign_dec_int, data);
		data->width = data->width - ft_strlen(sign_dec_int);
		ft_putspaces(data);
	}
	else if (data->width > (int)ft_strlen(sign_dec_int) && data->zero != 0) // right justified with printed zeros
	{
		data->width = data->width - ft_strlen(sign_dec_int);
		ft_putzeros(data);
		ft_pf_putstr(sign_dec_int, data);
	}
	else if (data->width > (int)ft_strlen(sign_dec_int) && data->zero == 0) // right justified with printed spaces
	{
		data->width = data->width - ft_strlen(sign_dec_int);
		ft_putspaces(data);
		ft_pf_putstr(sign_dec_int, data);
	}
	else
		ft_pf_putstr(sign_dec_int, data);
    //teststruct_during(data);
}
