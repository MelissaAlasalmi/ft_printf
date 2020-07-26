/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:07:41 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/26 19:54:40 by Melissa          ###   ########.fr       */
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

void	ft_putzeros(int d, t_printf *data)
{
	while (d > 0)
	{	
		ft_pf_putchar('0', data);
		d--;
	}
}

void	ft_putspaces(int d, t_printf *data)
{
	while (d > 0)
	{
		ft_pf_putchar(' ', data);
		d--;
	}
}

void	ft_pf_toupper(char *base, t_printf *data)
{
	int i;
	char c;
	
	i = 0;
	while (base[i] != '\0')
    {
		c = ft_toupper(base[i]);
        ft_pf_putchar(c, data);
        i++;
    }
}