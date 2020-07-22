/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/22 17:58:37 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// Covers { -, width value} 
// To go: {All done!}

void	type_s(va_list args, t_printf *data)
{
	char *str;
	
	str = va_arg(args, char*);
	if (data->minus != 0)
	{
		ft_pf_putstr(str, data);
		data->width = data->width - ft_strlen(str);
		ft_putspaces(data);
	}
	else if (data->width > (int)ft_strlen(str))
	{
		data->width = data->width - ft_strlen(str);
		ft_putspaces(data);
		ft_pf_putstr(str, data);
	}
	// if (data->asterisk != 0)
	// 	// add * format
	else
		ft_pf_putstr(str, data);
    //teststruct_during(data);
}
