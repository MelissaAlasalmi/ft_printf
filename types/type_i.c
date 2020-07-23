/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/23 17:57:16 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//Covers { 0, -, width value} 
// To go: { +, space, ., precision value, hh, h, l , ll, L}

void	type_i(va_list args, t_printf *data) 
{
	char *sign_dec_int;
	
	signed_converter(args, data);
	sign_dec_int = ft_itoa(data->value);
	if (data->minus != 0 && data->zero != 0)
	{
		ft_pf_putstr(sign_dec_int, data);
		data->width = data->width - ft_strlen(sign_dec_int);
		ft_putzeros(data->width, data);
	}
	else if (data->minus != 0 && data->zero == 0)
	{
		ft_pf_putstr(sign_dec_int, data);
		data->width = data->width - ft_strlen(sign_dec_int);
		ft_putspaces(data->width, data);
	}
	else if (data->width > (int)ft_strlen(sign_dec_int) && data->zero != 0)
	{
		data->width = data->width - ft_strlen(sign_dec_int);
		ft_putzeros(data->width, data);
		ft_pf_putstr(sign_dec_int, data);
	}
	else if (data->width > (int)ft_strlen(sign_dec_int) && data->zero == 0)
	{
		data->width = data->width - ft_strlen(sign_dec_int);
		ft_putspaces(data->width, data);
		ft_pf_putstr(sign_dec_int, data);
	}
	else
		ft_pf_putstr(sign_dec_int, data);
    //teststruct_during(data);
}
