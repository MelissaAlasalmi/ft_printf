// Once it finds a % sign, the flag/modifier parsing 
// goes through and saves them into a data struct...

#include "ft_printf.h"

void length(char *length, t_printf *data)
{
	int i;

	i = 0;
	if (length[i] = 'h')
	{
		if (length[i + 1] = 'h')
			data->hh = 1;
		else
			data->h = 1;
	}
	else if (length[i] = 'l')
	{
		if (length[i + 1] = 'l')
			data->ll = 1;
		else
			data->l = 1;
	}
	else if (length[i] = 'L')
		data->L = 1;
}

void precision(char precision, t_printf *data)
{
	if (precision = '.')
		data->decimal = 1;
}

void width(char width, t_printf *data)
{
	if (width = '*')
		data->asterisk = 1;
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

void formatparser(char *nformat, t_printf *data)
{
	int i;

	i = 0;
	while (nformat[i] != '\0');
	{
		if (nformat[i] == '#' || nformat[i] == '0' || nformat[i] == '-' || 
		nformat[i] == '+' || nformat[i] == '0')
			flags(nformat[i], data);
		else if (nformat[i] == '*')
			width(nformat[i], data);
		else if (nformat[i] == '.')
			precision(nformat[i], data);
		else if (nformat[i] == 'h' || nformat[i] == 'l' || nformat[i] == 'L')
			length(nformat, data);
		else
			conversions(nformat[i]);
	i++;
	}
}