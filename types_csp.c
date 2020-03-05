#include "ft_printf.h"
#include <stdlib.h>

void	type_p(t_printf *data, va_list args)
{
	
}

void	type_s(t_printf *data, va_list args)
{
	
}

void	type_c(t_printf *data, va_list args)
{
	char c;

	if (c == va_arg(args, char))
		ft_putchar(c);
}