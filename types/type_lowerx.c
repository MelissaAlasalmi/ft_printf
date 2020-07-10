/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_lowerx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/10 10:08:02 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_printf	type_x(va_list args, t_printf *data)
{
    unsigned long long value;
	char *base;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoabase(value, 16);
	ft_pf_putstr(base, data);
    //teststruct_during(data);
	return(*data);
}
