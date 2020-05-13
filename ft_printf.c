#include "ft_printf.h"
#include <stdio.h>

void ft_preparser(char c, t_printf *data, va_list args) //27 lines
{
	char	*all;
	int		i;

	all = "-+ #0*.hlLcspdiouxXf";
	i = 0;	
	while (i < 10)
	{	
		if (c == all[i])
		{
			flags_to_struct(c, data);
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
			output(c, args); //, data,);
			break ;
		}
		else
			i++;
	}
}

int	ft_printf(const char *format, ...) // 32 lines
{
	va_list		args;
	char		*nformat;
	t_printf	*data;

	va_start(args, format);
	nformat = (char *)format;
	data = initialize();
	while (*nformat != '\0')
	{
		if (*nformat == '%' && (*(nformat + 1) != '%'))
		{
			nformat++;
			while (*nformat != '%' && *nformat != '\0')
			{
				ft_preparser(*nformat, data, args);
				nformat++;
			}
		}
		else if (*nformat == '%' && (*(nformat + 1) == '%'))
		{
			ft_putchar('%');
			nformat++;
		}
		else
		{
			ft_putchar(*nformat);
			nformat++;
		}
	}
	teststruct(data);
	va_end(args);
	return (0);
}
