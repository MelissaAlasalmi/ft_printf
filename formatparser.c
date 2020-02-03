// Once it finds a % sign, the flag/modifier parsing 
// goes through and saves them into a data struct...

#include "ft_printf.h"
#include <stdio.h>

void formatparser(char *nformat, va_list arg)
{
	ft_putstr(nformat);
	ft_putstr(ft_strdup(va_arg(arg, char *)));
}