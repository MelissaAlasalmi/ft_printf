/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:25:44 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/17 13:55:05 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*initialize(void)
{
	t_printf *data;

	if (!(data = (t_printf *)malloc(sizeof(t_printf))))
		return (NULL);
	data->hash = 0;
	data->zero = 0;
	data->minus = 0;
	data->plus = 0;
	data->space = 0;
	data->width = 0;
	data->precision = 0;
	data->decimal = 0;
	data->hh = 0;
	data->h = 0;
	data->l = 0;
	data->ll = 0;
	data->upperl = 0;
	data->printf = 0;
	data->nformat = NULL;
	data->ivalue = 0;
	data->lvalue = 0;
	data->llvalue = 0;
	data->ldvalue = 0;
	data->sign = 0;
	return (data);
}

void		re_initialize(t_printf *data)
{
	data->hash = 0;
	data->zero = 0;
	data->minus = 0;
	data->plus = 0;
	data->space = 0;
	data->width = 0;
	data->precision = 0;
	data->decimal = 0;
	data->hh = 0;
	data->h = 0;
	data->l = 0;
	data->ll = 0;
	data->upperl = 0;
	data->printf = 0;
	data->ivalue = 0;
	data->lvalue = 0;
	data->llvalue = 0;
	data->ldvalue = 0;
	data->sign = 0;
}
