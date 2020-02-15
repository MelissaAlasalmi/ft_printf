#include "ft_printf.h"

int ft_printf(const char *restrict format, ...)
{
	va_list		args; // second param of printf
	char		*nformat; //new format cast into a char string
	t_printf	*data;

	va_start(args, format);
	nformat = (char *)format;
	data = initialize(nformat);

// mainparser!! differentiates between things that you want printed out 
// vs flags, width, precision, length, and conversions
	while (*nformat != '\0')
	{
		if (*nformat == '%')
			if (*(nformat + 1) == 'h' || *(nformat + 1) == 'l' 
			|| *(nformat + 1) =='L')
				length(*(nformat + 1), data);
			else
				formatparser(*(nformat + 1), data);
		else
			ft_putchar(*nformat);
		nformat++;
	}
	va_end(args);
	return (0);
}