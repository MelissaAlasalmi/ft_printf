#include "ft_printf.h"

void	type_c(va_list args, t_printf *data)
{
	char c;

	c = (char)va_arg(args, int);
	if (data->width != 0)
	{
		data->width = data->width - 1;
		while (data->width != 0)
		{
			write(1, " ", 1);
			data->width = data->width - 1;
		}
		ft_putchar(c);
	}
	else
		ft_putchar(c);
}

void	type_s(va_list args, t_printf *data)
{
	char *str;

	str = va_arg(args, char*);
	if (data->width != 0)
	{
		data->width = data->width - ft_strlen(str);
		while (data->width != 0)
		{
			write(1, " ", 1);
			data->width = data->width - 1;
		}
		ft_putstr(str);
	}
	else
		ft_putstr(str);
}

void	type_p(va_list args)
{
	unsigned long long value;
	char *base;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoabase(value, 16);
	write(1,"0x", 2);
	ft_putstr(base);
}

void	type_d(va_list args)
{
	unsigned long long value;
	char *sign_dec_int;

	value = (unsigned long long)va_arg(args, void*);
	sign_dec_int = ft_itoa(value);
	ft_putstr(sign_dec_int);
}

void	type_i(va_list args)
{
	unsigned long long value;
	char *sign_dec_int;

	value = (unsigned long long)va_arg(args, void*);
	sign_dec_int = ft_itoa(value);
	ft_putstr(sign_dec_int);
}