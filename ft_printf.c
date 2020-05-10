#include "ft_printf.h"
#include <stdio.h>

void ft_preparser(char c, t_printf *data) //, va_list args)
{
	char	*all;
	int		i;

	all = "-+ #0*.hlLcspdiouxXf";
	i = 0;	
	while (i < 10)
	{	
		if (c == all[i])
		{
			flags_to_struct(c, data);
			i = 0;
			break ;
		}
		else 
			i++;
	}
	//teststruct(data);
	while (i >= 10 && i < 20)
	{
		if (c == all[i])
		{
			printf("<Got to output>\n");
			output(c); //, data, args);
			break ;
		}
		else
			i++;
	}
}

int	ft_printf(const char *format, ...) // 24 lines, no touch!
{
	va_list		args;
	char		*nformat;
	t_printf	*data;

	va_start(args, format);
	nformat = (char *)format;
	data = initialize();
	while (*nformat != '\0')
	{
		printf("<In the main nformat loop>\n");
		if (*nformat == '%' && (*(nformat + 1) != '%'))
		{
			printf("<%c>\n", *nformat);
			nformat++;
			while (*nformat != '%' && *nformat != '\0')
			{
				printf("<In the inner preparser loop>\n");
				ft_preparser(*nformat, data); //args);
				nformat++;
			}
		}
		else if (*nformat == '%' && (*(nformat + 1) == '%'))
		{
			ft_putchar('%');
			nformat++;
			printf("<Printed %%>\n");
		}
		else
		{
			//printf("<%c>\n", *nformat);
			printf("<Nothing to see here>\n");
			ft_putchar(*nformat);
			nformat++;
		}
	}
	teststruct(data);
	va_end(args);
	return (0);
}
