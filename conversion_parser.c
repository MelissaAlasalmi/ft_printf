// a data struct is taken by the conversion function and 
// passed into each individual conversion to be processed into an 
// output.

#include "ft_printf.h"

void		cons_diouxX(char next, t_printf *data)
{
	if (next == 'd')
		data->d = 1;
	else if (next == 'i')
		data->i = 1;
	else if (next == 'o')
		data->o = 1;
	else if (next == 'u')
		data->u = 1;
	else if (next == 'x')
		data->x = 1;
	else if (next == 'X')
		data->X = 1;
}
void		cons_csp(char next, t_printf *data)
{
	if (next == 'c')
		data->c = 1;
	else if (next == 's')
		data->s = 1;
	else if (next == 'p')
		data->p = 1;
}
void		conversion_parser(char next, t_printf *data)
{
	if (next == 'c' || next == 's' || next == 'p')
		cons_csp(next, data);
	else if (next == 'd' || next == 'i' || next == 'o' || 
	next == 'u' || next == 'x' || next == 'X')
		cons_diouxX(next, data);
	else if (next == 'f')
		data->f = 1;
}