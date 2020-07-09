/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_lowerx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/09 15:29:18 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_x(va_list args)
{
    unsigned long long value;
	char *base;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoabase(value, 16);
	ft_putstr(base);
}
