// a data struct is taken by the conversion function and 
// passed into each individual conversion to be processed into an 
// output.

#include "ft_printf.h"

t_printf	conversions(char *nformat)
{
	t_printf *fstruct;
	fstruct = (t_printf *)malloc(sizeof(t_printf));
	fstruct->zero = 1;
	ft_putstr(nformat);
	return(*fstruct);
}