/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:42:46 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/08 15:08:38 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*signed_converter(va_list args, t_printf *data)
{
	char *cvalue;
	if (data->hh == 1)
	{
		data->ivalue = (char)va_arg(args, void*);
		cvalue = ft_itoa(data->ivalue);
	}
	else if (data->h == 1)
	{
		data->ivalue = (short)va_arg(args, void*);
		cvalue = ft_itoa(data->ivalue);
	}
	else if (data->l == 1)
	{
		data->lvalue = (long)va_arg(args, void*);
		cvalue = ft_itoa(data->lvalue);
	}
	else if (data->ll == 1)
	{
		data->llvalue = (long long)va_arg(args, void*);
		cvalue = ft_itoa(data->llvalue);
	}
	else
	{
		data->ivalue = (int)va_arg(args, void*);
		cvalue = ft_itoa(data->ivalue);
	}
	if (cvalue[0] == '0' && data->decimal == 1 && data->precision == 0)
		cvalue = "";
	return(cvalue);
}

char	*unsigned_converter(va_list args, t_printf *data, int base)
{
	char *cvalue;
	if (data->hh == 1)
	{		
		data->ivalue = (unsigned char)va_arg(args, void*);
		cvalue = ft_uitoabase(data->ivalue, base);
	}
	else if (data->h == 1)
	{
		data->ivalue = (unsigned short)va_arg(args, void*);
		cvalue = ft_uitoabase(data->ivalue, base);
	}
	else if (data->l == 1)
	{
		data->lvalue = (unsigned long)va_arg(args, void*);
		cvalue = ft_uitoabase(data->lvalue, base);
	}
	else if (data->ll == 1)
	{
		data->llvalue = (unsigned long long)va_arg(args, void*);
		cvalue = ft_uitoabase(data->llvalue, base);
	}
	else
	{
		data->llvalue = (unsigned long long)va_arg(args, void*);
		cvalue = ft_uitoabase(data->llvalue, base);
	}
	if (cvalue[0] == '0' && data->decimal == 1 && data->precision == 0)
	{
		cvalue = "";
		data->precision--;
	}
	return(cvalue);	
}
