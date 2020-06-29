#include "ft_printf.h"

int	output(char c, va_list args, t_printf *data)
{
	if (c == 'c')
		type_c(args, data);
	else if (c == 's')
		type_s(args);
	else if (c == 'p')
		type_p(args);
	else if (c == 'd')
		type_d(args);
	else if (c == 'i')
		type_i(args);
	else if (c == 'o')
		type_o(args);
	else if (c == 'u')
		type_u(args);
	else if (c == 'x')
		type_x(args);
	else if (c == 'X')
		type_X(args);
	else if (c == 'f')
		type_f(args);
	return (0);
}