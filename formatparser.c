// Once it finds a % sign, the flag/modifier parsing 
// goes through and saves them into a data struct...

#include "ft_printf.h"

void formatparser(char *nformat, va_list args)
{
	ft_putstr(nformat);
	ft_putstr(ft_strdup(va_arg(args, char *)));
}