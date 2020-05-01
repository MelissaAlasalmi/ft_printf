#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args; // second param of printf
	char		*nformat; //new format cast into a char string
	t_printf	*data;
	char		*all;
	int 		i; // for iterating thru all flags and types

	va_start(args, format);
	nformat = (char*)format;
	all = "hlL#0-+ cspdiouxXf";
	i = 0;

// Mainparser - differentiates between things that you want printed out and a format specifier:
// < % (flags) (width) (.precision) (length) type specifier >
	while (*nformat != '\0')
	{
		if (*nformat == '%' && (*(nformat + 1) != '%'))
		{
			data = initialize();
			*nformat++;
			while (i < 18)
			{
				if (i <= 7)
				{
					if (*nformat == all[i])
						format_parser(nformat, *nformat, data);
					else
						i++;
				}
				else if (i >= 8 && < 18)
				{
					if (*nformat == all[i])
						{
							type_parser(*nformat, data);
							output(data, args);
						}
					else
						i++;
				}
			}
		}
		else if (*nformat == '%' && (*(nformat + 1) == '%'))
			ft_putchar('%');
		else
			ft_putchar(*nformat);
		*nformat++;
	}
	va_end(args);
	return (0);
}
