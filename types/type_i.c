/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/09 15:29:00 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_i(va_list args)
{
	unsigned long long value;
	char *sign_dec_int;

	value = (unsigned long long)va_arg(args, void*);
	sign_dec_int = ft_itoa(value);
	ft_putstr(sign_dec_int);
}
