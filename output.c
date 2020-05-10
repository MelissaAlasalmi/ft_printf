#include "ft_printf.h"

int	output(char c) //, t_printf *data, va_list args)
{
	if (c == 'c')
	{
		write(1, &c,1);
		return (0);
	}
	else
		return (0);
}