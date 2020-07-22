/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:25:58 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/22 15:01:21 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
t_printf	output_numerics(va_list args, t_printf *data)
{
	if (*data->nformat == 'd')
		type_d(args, data);
	else if (*data->nformat == 'i')
		type_i(args, data);
	else if (*data->nformat == 'o')
		type_o(args, data);
	else if (*data->nformat == 'u')
		type_u(args, data);
	else if (*data->nformat == 'x')
		type_x(args, data);
	else if (*data->nformat == 'X')
		type_X(args, data);
	// else if (*data->nformat == 'f')
	// 	type_f(args, data);
	if (data->value < 0) // cancel out all of the flags that only work for positive numbers
		data->plus = 0;
	if (data->decimal == 1 && data->precision == 0) // cancel out precision if it's zero
		data->decimal = 0;
	return (*data);
}

t_printf	output(va_list args, t_printf *data)
{
	if (*data->nformat == 'c')
		type_c(args, data);
	else if (*data->nformat == 's')
		type_s(args, data);
	else if (*data->nformat == 'p')
		type_p(args, data);
	else 
		output_numerics(args, data);
	return (*data);
}
