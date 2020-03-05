// Once it finds a % sign, the flag/modifier parsing
// goes through and saves them into a data struct...

#include "ft_printf.h"

int		length(char *nformat, t_printf *data)
{
	if (*nformat == 'h')
	{
		if (*(nformat + 1) == 'h')
		{
			data->hh = 1;
			return (2);
		}
		else
			data->h = 1;
	}
	else if (*nformat == 'l')
	{
		if (*(nformat + 1) == 'l')
		{
			data->ll = 1;
			return (2);
		}
		else
			data->l = 1;
	}
	else if (*nformat == 'L')
		data->L = 1;
	return (1);
}

void	flags(char flag, t_printf *data)
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

int	format_parser(char *nformat, char next, t_printf *data)
{
	if (next == '#' || next == '0' || next == '-' ||
		next == '+' || next == ' ')
		flags(next, data);
	else if (next == '*')
		data->asterisk = 1;
	else if (next == '.')
		data->decimal = 1;
	else if (next == 'h' || next == 'l' || next == 'L')
		return (length(nformat, data));
	return (1);
}
