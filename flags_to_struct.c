// Once it finds a % sign, the flag/modifier parsing
// goes through and saves them into a data struct...

#include "ft_printf.h"

void	length(char flag, t_printf *data) // 23 lines
{
	if (flag == 'h')
	{
		if (data->h == 1)
		{
			data->hh = 1;
			data->h = 0;
		}
		else
			data->h = 1;
	}
	else if (flag == 'l')
	{
		if (data->l == 1)
		{
			data->ll = 1;
			data->l = 0;
		}
		else
			data->l = 1;
	}
	else if (flag == 'L')
		data->L = 1;
}

void	amplifiers(char flag, t_printf *data)
{
	if (flag == '#')
		data->hash = 1;
	else if (flag == '0')
		data->zero = 1;
	else if (flag == '-')
		data->minus = 1;
	else if (flag == '+')
		data->plus = 1;
	else if (flag == ' ')
		data->space = 1;
}

t_printf	flags_to_struct(char c, t_printf *data)
{
	if (c == '#' || c == '0' || c == '-' ||
		c == '+' || c == ' ')
		amplifiers(c, data);
	else if (c == '*')
		data->asterisk = 1;
	else if (c == '.')
		data->decimal = 1;
	else if (c == 'h' || c == 'l' || c == 'L')
		length(c, data);
	return (*data);
}
