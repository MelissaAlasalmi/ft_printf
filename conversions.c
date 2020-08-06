/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:42:46 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/06 16:53:09 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	signed_converter(va_list args, t_printf *data)
{
	if (data->hh == 1)			
		data->value = (char)va_arg(args, void*);
	else if (data->h == 1)
		data->value = (short)va_arg(args, void*);
	else if (data->l == 1)
		data->value = (long)va_arg(args, void*);
	else if (data->ll == 1)
		data->value = (long long)va_arg(args, void*);
	else
		data->value = (int)va_arg(args, void*);	
}

void	unsigned_converter(va_list args, t_printf *data)
{
	if (data->hh == 1)			
		data->value = (unsigned char)va_arg(args, void*);
	else if (data->h == 1)
		data->value = (unsigned short)va_arg(args, void*);
	else if (data->l == 1)
		data->value = (unsigned long)va_arg(args, void*);
	else if (data->ll == 1)
		data->value = (unsigned long long)va_arg(args, void*);
	else
		data->value = (unsigned long long)va_arg(args, void*);		
}
