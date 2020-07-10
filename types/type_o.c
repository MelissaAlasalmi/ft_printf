/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:27 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/10 09:53:22 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_printf	type_o(va_list args, t_printf *data)
{
    unsigned long long value;
	char *base;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoabase(value, 8);
	ft_pf_putstr(base, data);
    teststruct_during(data);
	return(*data);
}
