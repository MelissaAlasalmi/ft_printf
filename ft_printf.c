#include "ft_printf.h"

int ft_printf(const char *restrict format, ...)
{
	va_list	args;
	size_t	i;
	char	*nformat;

	i = 0;
	va_start(args, format);
	nformat = (char *)format;

// mainparser!! differentiates between things that you want printed out 
// vs conversions starting with %
	while (nformat[i] != '\0')
	{
		if (nformat[i] == '%')
			formatparser(nformat, args);
		else
			ft_putchar(nformat[i]);
		i++;
	}
	va_end(args);
	return (0);
}