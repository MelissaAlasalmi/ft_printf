/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:25:24 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/10 10:03:20 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_flagparser(char c, char *nformat, t_printf *data, va_list args)
{
	char	*all;
	int		i;

	all = "-+ #0*.hlLcspdiouxXf";
	i = 0;
	width_to_struct(nformat, data);
	while (i < 10)
	{
		if (c == all[i])
		{
			format_to_struct(c, nformat, data);
			i = 0;
			break ;
		}
		else
			i++;
	}
	////teststruct_before(data);
	while (i >= 10 && i < 20)
	{
		if (c == all[i])
		{
			output(c, args, data);
			return (1);
		}
		else
			i++;
	}
	return (0);
}

int	ft_preparser(char *nformat, t_printf *data, va_list args)
{
	int			returnvalue;
	
	returnvalue = 0;
	while (*nformat != '\0')
	{
		if (*nformat == '%')
		{
			nformat++;
			if (*nformat == '%')
			{
				ft_pf_putchar('%', data);
				nformat++;
			}
			else
			{
				while (*nformat != '%' && *nformat != '\0')
				{
					if (ft_flagparser(*nformat, nformat, data, args) == 1)
					{
						nformat++;
						break ;
					}
					else
						nformat++;
				}
			}
		}
		else
		{
			ft_pf_putchar(*nformat, data);
			nformat++;
		}
		returnvalue = returnvalue + data->printf;
		data = re_initialize(nformat);
	}
	return(returnvalue);
}

int		ft_printf(const char *format, ...)
{
	va_list		args;
	char		*nformat;
	t_printf	*data;
	int			returnvalue;

	va_start(args, format);
	nformat = (char *)format;
	data = initialize(nformat);
	returnvalue = ft_preparser(nformat, data, args);
    teststruct_after(data, returnvalue);
	va_end(args);
	return (returnvalue);
}
