#include "ft_printf.h"

int	output(char c, va_list args) //, t_printf *data)
{
	char b;
	char *str;
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
	return (0);
}