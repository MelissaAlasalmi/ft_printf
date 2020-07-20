/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:42:46 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/20 21:28:31 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	signed_converter(va_list args, t_printf *data)
{
	if (data->hh != 0)			
		data->value = (char)va_arg(args, void*);
	else if (data->h != 0)
		data->value = (short)va_arg(args, void*);
	else if (data->l != 0)
		data->value = (long)va_arg(args, void*);
	else if (data->ll != 0)
		data->value = (long long)va_arg(args, void*);
	else
		data->value = (long long)va_arg(args, void*);	
}

void	unsigned_converter(va_list args, t_printf *data)
{
	if (data->hh != 0)			
		data->value = (unsigned char)va_arg(args, void*);
	else if (data->h != 0)
		data->value = (unsigned short)va_arg(args, void*);
	else if (data->l != 0)
		data->value = (unsigned long)va_arg(args, void*);
	else if (data->ll != 0)
		data->value = (unsigned long long)va_arg(args, void*);
	else
		data->value = (unsigned long long)va_arg(args, void*);		
}
