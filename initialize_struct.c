/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:25:44 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/10 09:57:08 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf		*initialize(char *nformat)
{
	t_printf *data;

	if (!(data = (t_printf *)malloc(sizeof(t_printf))))
		return (NULL);
	data->hash = 0;
	data->zero = 0;
	data->minus = 0;
	data->plus = 0;
	data->space = 0;
	data->asterisk = 0;
	data->width = width_len(nformat);
	data->precision = precision_len(nformat);
	data->decimal = 0;
	data->hh = 0;
	data->h = 0;
	data->l = 0;
	data->ll = 0;
	data->L = 0;
	data->printf = 0;
	return (data);
}

t_printf		*re_initialize(char *nformat)
{
	t_printf *data;

	if (!(data = (t_printf *)malloc(sizeof(t_printf))))
		return (NULL);
	data->hash = 0;
	data->zero = 0;
	data->minus = 0;
	data->plus = 0;
	data->space = 0;
	data->asterisk = 0;
	data->width = width_len(nformat);
	data->precision = precision_len(nformat);
	data->width = 0;
	data->precision = 0;
	data->decimal = 0;
	data->hh = 0;
	data->h = 0;
	data->l = 0;
	data->ll = 0;
	data->L = 0;
	data->printf = 0;
	return (data);
}

