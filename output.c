#include "ft_printf.h"

int	output(char c, va_list args) //, t_printf *data)
{
	char b;
	char *str;
	unsigned long long value;
	char *base;
	if (c == 'c')
	{
		b = (char)va_arg(args, int);
		write(1, &b,1);
	}
	else if (c == 's')
	{
		str = va_arg(args, char*);
		while (*str != '\0')
		{
			write(1, *&str,1);
			str++;
		}
	}
	else if (c == 'p')
	{
		value = (unsigned long long)va_arg(args, void*);
		base = ft_itoa_base(value, 16);
		write(1,"0x", 2);
		ft_putstr(base);
	}
	return (0);
}