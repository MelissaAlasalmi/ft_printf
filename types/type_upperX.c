/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_upperX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/10 09:53:22 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_printf	type_X(va_list args, t_printf *data)
{
    unsigned long long value;
	char *base;
	char c;
    int i;
    i = 0;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoabase(value, 16);
    while (base[i] != '\0')
    {
		c = ft_toupper(base[i]);
        ft_pf_putchar(c, data);
        i++;
    }
    teststruct_during(data);
    return(*data);
}
