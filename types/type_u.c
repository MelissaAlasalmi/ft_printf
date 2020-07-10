/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/10 09:53:22 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_printf		type_u(va_list args, t_printf *data)
{
	unsigned long long value;
	char *unsign_dec_int;

	value = (unsigned long long)va_arg(args, void*);
	unsign_dec_int = ft_itoa(value);
	ft_pf_putstr(unsign_dec_int, data);
    teststruct_during(data);
	return(*data);
}
