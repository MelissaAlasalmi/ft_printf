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

void	precision_to_struct(char *nformat, t_printf *data)
{
	int precision_value;
	precision_value = 0;

	while (*nformat != '\0')
	{
		if (*nformat == '.')
		{
			precision_value = ft_atoi(nformat + 1);
			data->precision = precision_value;
			break ;
		}
		else
			nformat++;
	}
}

void	width_to_struct(char *nformat, t_printf *data)
{
	int width_value;
	width_value = 0;

	while (*nformat != '\0')
	{
		if (*nformat == '.')
			break ;
		else if (*nformat == '0' && *nformat + 1 >= '0' && *nformat + 1 <= '9')
		{
			width_value = ft_atoi(nformat + 1);
			data->width = width_value;
			break ;
		}
		else if (*nformat >= '0' && *nformat <= '9')
		{
			width_value = ft_atoi(nformat);
			data->width = width_value;
			break ;
		}
		else
			nformat++;
	}
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

t_printf	flags_to_struct(char c, char *nformat, t_printf *data)
{
	width_to_struct(nformat, data);
	if (c == '#' || c == '0' || c == '-' ||
		c == '+' || c == ' ')
		amplifiers(c, data);
	else if (c == '*')
		data->asterisk = 1;
	else if (c == '.')
	{
		data->decimal = 1;
		precision_to_struct(nformat, data);
	}
	else if (c == 'h' || c == 'l' || c == 'L')
		length(c, data);
	return (*data);
}
