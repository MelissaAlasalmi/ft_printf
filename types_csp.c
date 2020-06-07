#include "ft_printf.h"
#include <stdlib.h>

void	type_c(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	ft_putchar(c);
}

void	type_s(va_list args)
{
	char *str;

	str = va_arg(args, char*);
	ft_putstr(str);
}

void	type_p(va_list args)
{
	unsigned long long value;
	char *base;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoa_base(value, 16);
	write(1,"0x", 2);
	ft_putstr(base);
}