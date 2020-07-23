/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/23 17:58:14 by Melissa          ###   ########.fr       */
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
		ft_putspaces(data->width, data);
	}
	else if (data->width > (int)ft_strlen(str))
	{
		data->width = data->width - ft_strlen(str);
		ft_putspaces(data->width, data);
		ft_pf_putstr(str, data);
	}
	// if (data->asterisk != 0)
	// 	// add * format
	else
		ft_pf_putstr(str, data);
    //teststruct_during(data);
}
