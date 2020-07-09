/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_upperX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/09 15:29:49 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		type_X(va_list args)
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
        write(1, &c, 1);
        i++;
    }	
}
