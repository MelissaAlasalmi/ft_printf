/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:25:24 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/23 19:17:21 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_typeparser(t_printf *data, va_list args)
{
	char	*all;
	int		i;

	all = "cspdiouxXf";
	i = 0;
	while (i < 10)
	{
		if (*data->nformat == all[i])
		{
			output(args, data);
			return (1);
		}
		else
			i++;
	}
	return (0);
}

int		ft_flagparser(t_printf *data, va_list args)
{
	char	*allflag;
	int		i;

	allflag = "-+ #0123456789.*hlL";
	i = 0;
	while (i < 19)
	{
		if (*data->nformat == allflag[i])
		{
			format_to_struct(data);
			i++;
		}
		else
			i++;
	}
	if (i == 20)
		data->nformat++;
	return (ft_typeparser(data, args));
}

void	ft_percentparser(t_printf *data, va_list args)
{
	data->nformat++;
	if (*data->nformat == '%')
	{
		ft_pf_putchar('%', data);
		data->nformat++;
	}
	else
	{
		while (*data->nformat != '%' && *data->nformat != '\0')
		{
			if (ft_flagparser(data, args) == 1)
			{
				data->nformat++;
				break ;
			}
			else
				data->nformat++;
		}
	}
}

int		ft_preparser(t_printf *data, va_list args)
{
	int	returnvalue;

	returnvalue = 0;
	while (*data->nformat != '\0')
	{
		if (*data->nformat == '%')
			ft_percentparser(data, args);
		else
		{
			ft_pf_putchar(*data->nformat, data);
			data->nformat++;
		}
		returnvalue = returnvalue + data->printf;
		re_initialize(data);
	}
	return (returnvalue);
}

// to increment the char in the pointer and not the pointer itself -> *nformat++; this will take the actual letter and increase it by one -> 'a' becomes 'b'

int		ft_printf(const char *format, ...)
{
	va_list		args;
	t_printf	*data;
	int			returnvalue;

	va_start(args, format);
	data = initialize();
	data->nformat = (char *)format;
	returnvalue = ft_preparser(data, args);
	free(data);
    //teststruct_after(data, returnvalue);
	va_end(args);
	return (returnvalue);
}
