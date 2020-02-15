// Once it finds a % sign, the flag/modifier parsing 
// goes through and saves them into a data struct...

#include "ft_printf.h"

void length(char *next, t_printf *data)
{
	if (*next = 'h')
	{
		if (*(next + 1) = 'h')
			data->hh = 1;
		else
			data->h = 1;
	}
	else if (*next = 'l')
	{
		if (*(next + 1) = 'l')
			data->ll = 1;
		else
			data->l = 1;
	}
	else if (*next = 'L')
		data->L = 1;
}

void flags(char flag, t_printf *data)
{
	if (flag = '#')
		data->hash = 1;
	else if (flag = '0')
		data->zero = 1;
	else if (flag = '-')
		data->minus = 1;
	else if (flag = '+')
		data->plus = 1;
	else if	(flag = ' ')
		data->space = 1;
}

void format_parser(char next, t_printf *data)
{
	if (next == '%')
		ft_putchar('%');
	else if (next == '#' || next == '0' || next == '-' || 
		next == '+' || next == ' ')
		flags(next, data);
	else if (next == '*')
		data->asterisk = 1;
	else if (next == '.')
		data->decimal = 1;
	else
		conversions(next, data);
}