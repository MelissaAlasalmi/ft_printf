/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/13 14:49:02 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_p(va_list args, t_printf *data)
{
	unsigned long long value;
	char *base;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoabase(value, 16);
	ft_pf_putstr("0x",data);
	ft_pf_putstr(base, data);
    //teststruct_during(data);
}


// void	type_s(va_list args, t_printf *data)
// {
// 	char *str;
// 	str = va_arg(args, char*);
// 	if (data->minus != 0)
// 		// add - format
// 	if (data->width > (int)ft_strlen(str))
// 	{
// 		data->width = data->width - ft_strlen(str);
// 		while (data->width > 0)
// 		{
// 			ft_pf_putchar(' ', data);
// 			data->width--;
// 		}
// 		ft_pf_putstr(str, data);
// 	}
// 	if (data->asterisk != 0)
// 		// add * format
// 	else
// 		ft_pf_putstr(str, data);
//     //teststruct_during(data);
// }