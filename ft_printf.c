#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args; // second param of printf
	char		*nformat; //new format cast into a char string
	t_printf	*data;
	char		*types;
	int 		i; //for types

	va_start(args, format);
	nformat = (char*)format;
	types = "cspdiouxXf";
	i = 0;

// mainparser!! differentiates between things that you want printed out 
// vs flags, width, precision, length, and conversions
	while (*nformat != '\0')
	{
		if (*nformat == '%')
		{
			// if (*(nformat + 1) == '%') ------> move this!!!
			// {
			// 	ft_putchar('%');
			//	nformat++;
			//	}
			data = initialize();
			nformat++;
			while (*nformat != '%')
			{
				if (*nformat == *types)
				{
					type_parser(*nformat, data);
					output(data, args);
					break ;
				}
				else if (*nformat != *types)
					types++;
				else if (*types == '\0')
					nformat += format_parser(nformat, *nformat, data);
			}
		}
		else
			ft_putchar(*nformat);
		nformat++;
	}
	va_end(args);
	return (0);
}
