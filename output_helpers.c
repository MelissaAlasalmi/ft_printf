/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:07:41 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/06 16:58:27 by malasalm         ###   ########.fr       */
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
char	*ft_putsign(t_printf *data, char *valuestr)
{
	int i;

	i = 0;
	if (data->value < 0)
	{
		ft_pf_putchar('-', data);
		while (valuestr[i] != '\0')
		{
			valuestr[i] = valuestr[i + 1];
			i++;
		}
	}
	else
	{
		if (data->plus == 1)
			ft_pf_putchar('+', data);
		else if (data->space == 1)
			ft_pf_putchar(' ', data);
	}
	return(valuestr);
}