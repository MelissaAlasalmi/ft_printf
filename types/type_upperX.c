/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_upperX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/13 18:52:58 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_X(va_list args, t_printf *data)
{
    unsigned long long value;
	char *base;
	char c;
    int i;
    i = 0;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoabase(value, 16);
	if (data->hash != 0)
		ft_pf_putstr("0X", data);
    if (data->minus != 0)
	{
		while (base[i] != '\0')
        {
            c = ft_toupper(base[i]);
            ft_pf_putchar(c, data);
            i++;
        }
        i = 0;
		data->width = data->width - ft_strlen(base);
		while (data->width > 0)
		{
			ft_pf_putchar(' ', data);
			data->width--;
		}
	}
	else if (data->width > (int)ft_strlen(base))
	{
		data->width = data->width - ft_strlen(base);
		while (data->width > 0)
		{
			ft_pf_putchar(' ', data);
			data->width--;
		}
		while (base[i] != '\0')
        {
		    c = ft_toupper(base[i]);
            ft_pf_putchar(c, data);
            i++;
        }
        i = 0;
	}
	else
    {
		while (base[i] != '\0')
        {
            c = ft_toupper(base[i]);
            ft_pf_putchar(c, data);
            i++;
        }
        i = 0;
    }
    //teststruct_during(data);
}
