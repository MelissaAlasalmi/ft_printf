#include "ft_printf.h"

int	output(char c, va_list args) //, t_printf *data)
{
	if (c == 'c')
	{
		write(1, &args,1);
		return (0);
	}
	else
		return (0);
}