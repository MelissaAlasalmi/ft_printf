/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/12 21:05:36 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_f(va_list args, t_printf *data)
{
	unsigned long long value;
	char *dec_float_point;

	value = (unsigned long long)va_arg(args, void*);
	dec_float_point = ft_itoa(value);
	ft_pf_putstr(dec_float_point, data);
    //teststruct_during(data);
}
