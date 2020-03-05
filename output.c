#include "ft_printf.h"

void	output(t_printf *data, va_list args)
{
	if (data->c == 1)
		type_c(data, args);
}
