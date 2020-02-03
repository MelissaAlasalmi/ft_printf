#include "libftprintf.h"
#include <stdio.h>

int ft_printf(const char *restrict format, ...)
{
	va_list	args; // will be passed into mainparser
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
			formatparser(nformat);
		else
			conversions(nformat);	
	}
	va_end(args);
	return (0);
}