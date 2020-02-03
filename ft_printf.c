#include "ft_printf.h"
#include <stdio.h>

int ft_printf(const char *restrict format, ...)
{
	va_list	arg; // will be passed into mainparser
	size_t	i;
	char	*nformat;

	i = 0;
	va_start(arg, format);
	nformat = (char *)format;

// mainparser!! differentiates between things that you want printed out 
// vs conversions starting with %
	while (nformat[i] != '\0')
	{
		if (nformat[i] == '%')
			formatparser(nformat, arg);
		else
			ft_putchar(nformat[i]);
		i++;
	}
	va_end(arg);
	return (0);
}