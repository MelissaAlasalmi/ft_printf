/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/10 09:53:22 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_printf	type_f(va_list args, t_printf *data)
{
	unsigned long long value;
	char *dec_float_point;

	value = (unsigned long long)va_arg(args, void*);
	dec_float_point = ft_itoa(value);
	ft_pf_putstr(dec_float_point, data);
    teststruct_during(data);
	return(*data);
}
