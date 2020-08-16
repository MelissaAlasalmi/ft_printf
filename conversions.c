/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:42:46 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/16 16:04:31 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*convert_sign(va_list args, t_printf *data, char *str)
{
	if (data->hh == 1)
	{
		data->ivalue = (char)va_arg(args, void*);
		str = ft_itoa(data->ivalue);
	}
	else if (data->h == 1)
	{
		data->ivalue = (short)va_arg(args, void*);
		str = ft_itoa(data->ivalue);
	}
	else if (data->l == 1)
	{
		data->lvalue = (long)va_arg(args, void*);
		str = ft_itoa(data->lvalue);
	}
	else if (data->ll == 1)
	{
		data->llvalue = (long long)va_arg(args, void*);
		str = ft_itoa(data->llvalue);
	}
	return (str);
}

char		*signed_converter(va_list args, t_printf *data)
{
	char *str;
	
	str = NULL;
	if (data->hh == 1 || data->h == 1 || data->l == 1 || data->ll == 1)
		str = convert_sign(args, data, str);
	else
	{
		data->ivalue = (int)va_arg(args, void*);
		str = ft_itoa(data->ivalue);
	}
	if (*str == '0' && data->decimal == 1 && data->precision == 0)
		str = "";
	return(str);
}

static char	*convert_unsign(va_list args, t_printf *data, int base, char *str)
{
	if (data->hh == 1)
	{		
		data->ivalue = (unsigned char)va_arg(args, void*);
		str = ft_uitoabase(data->ivalue, base);
	}
	else if (data->h == 1)
	{
		data->ivalue = (unsigned short)va_arg(args, void*);
		str = ft_uitoabase(data->ivalue, base);
	}
	else if (data->l == 1)
	{
		data->lvalue = (unsigned long)va_arg(args, void*);
		str = ft_uitoabase(data->lvalue, base);
	}
	else if (data->ll == 1)
	{
		data->llvalue = (unsigned long long)va_arg(args, void*);
		str = ft_uitoabase(data->llvalue, base);
	}
	return(str);
}

char		*unsigned_converter(va_list args, t_printf *data, int base)
{
	char *str;
	
	str = NULL;
	if (data->hh == 1 || data->h == 1 || data->l == 1 || data->ll == 1)
		str = convert_unsign(args, data, base, str);
	else
	{
		data->llvalue = (unsigned long long)va_arg(args, void*);
		str = ft_uitoabase(data->llvalue, base);
	}
	return(str);	
}
