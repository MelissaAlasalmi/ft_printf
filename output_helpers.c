/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:07:41 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/09 21:16:48 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pf_putchar(char c, t_printf *data)
{
	write(1, &c, 1);
	data->printf++;
}
void	ft_pf_putstr(char *str, t_printf *data)
{
	while (*str != '\0')
	{
		ft_pf_putchar(*str, data);
		str++;
	}
}