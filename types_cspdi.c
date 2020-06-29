#include "ft_printf.h"

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