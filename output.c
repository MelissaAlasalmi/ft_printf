#include "ft_printf.h"

int	output(char c, va_list args) //, t_printf *data)
{
	if (c == 'c')
		type_c(args);
	else if (c == 's')
		type_s(args);
	else if (c == 'p')
		type_p(args);
	else if (c == 'd')
		type_d(args);
	else if (c == 'i')
		type_i(args);
	return (0);
}