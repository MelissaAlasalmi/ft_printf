/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:25:24 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/09 14:31:40 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_preparser(char c, char *nformat, t_printf *data, va_list args) // 28 lines
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
			flags_to_struct(c, nformat, data);
			i = 0;
			break ;
		}
		else
			i++;
	}
	while (i >= 10 && i < 20)
	{
		if (c == all[i])
		{
			output(c, args, data);
			return (0);
		}
		else
			i++;
	}
	return (1);
}

int	ft_printf(const char *format, ...) // 42 lines
{
	va_list		args;
	char		*nformat;
	t_printf	*data;

	va_start(args, format);
	nformat = (char *)format;
	data = initialize(nformat);
	while (*nformat != '\0')
	{
		if (*nformat == '%' && (*(nformat + 1) != '%'))
		{
			nformat++;
			while (*nformat != '%' && *nformat != '\0')
			{
				if (ft_preparser(*nformat, nformat, data, args) == 0)
				{
					nformat++;
					break ;
				}
				else
					nformat++;
			}
		}
		else if (*nformat == '%' && (*(nformat + 1) == '%'))
		{
			nformat++;
			ft_putchar('%');
			nformat++;
		}
		else
		{
			ft_putchar(*nformat);
			nformat++;
		}
		data = initialize(nformat);
	}
	// printf("\n");
	// printf("TEST STRUCT:\n");
	// teststruct(data);
	// printf("\n");
	va_end(args);
	return (0);
}
