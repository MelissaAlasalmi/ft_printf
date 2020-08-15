/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/14 16:30:34 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_f(va_list args, t_printf *data)
{
	char *dec_float_point;

	data->ldvalue = (long double)va_arg(args, long double);
	printf("fvalue: %Lf\n", data->ldvalue);
	dec_float_point = ft_ftoa(data->ldvalue, data->precision, data->decimal);
	printf("decfloatpoint: %s\n", dec_float_point);

	ft_pf_putstr(dec_float_point, data);
}