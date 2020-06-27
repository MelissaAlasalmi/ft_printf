#include "ft_printf.h"

void		type_o(va_list args)
{
    unsigned long long value;
	char *base;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoa_base(value, 8);
	ft_putstr(base);
}

void		type_u(va_list args)
{
	unsigned long long value;
	char *unsign_dec_int;

	value = (unsigned long long)va_arg(args, void*);
	unsign_dec_int = ft_itoa(value);
	ft_putstr(unsign_dec_int);
}

void		type_x(va_list args)
{
    unsigned long long value;
	char *base;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoa_base(value, 16);
	ft_putstr(base);
}

void		type_X(va_list args)
{
    unsigned long long value;
	char *base;

	value = (unsigned long long)va_arg(args, void*);
	base = ft_itoa_base(value, 16);
	ft_putstr(base);
}

void		type_f(va_list args)
{
	unsigned long long value;
	char *dec_float_point;

	value = (unsigned long long)va_arg(args, void*);
	dec_float_point = ft_itoa(value);
	ft_putstr(dec_float_point);
}