#include "ft_printf.h"

int ft_printf(const char *restrict format, ...)
{
	va_list		args; // second param of printf
	size_t		i;
	char		*nformat; //new format cast into a char string
	char		*parsedata;
	t_printf	*data;

	i = 0;
	va_start(args, format);
	nformat = (char *)format;

// mainparser!! differentiates between things that you want printed out 
// vs flags, width, precision, length, and conversions
	while (nformat[i] != '\0')
	{
		if (nformat[i] == '%')
		{
			data = initialize(nformat);
			parsedata = formatparser(nformat, data);
		}
		else
			ft_putchar(nformat[i]);
		i++;
	}
	va_end(args);
	return (0);
}